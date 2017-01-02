
/* #line 1 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
// lexer.cpp - AUTO-GENERATED - DO NOT MODIFY!
// compile with `ragel -L -G1 -o src/lexer.cpp meta/lexer.rl`
#include "pch.hpp"
#include "lexer.hpp"
#include <be/core/exceptions.hpp>

#define BE_BLT_TOKEN_ESTIMATE_RATIO 0.2

namespace be {
namespace blt {
namespace {

/* #line 13 "L:\\repo\\bengine\\modules\\blt\\src\\lexer.cpp" */
static const int blt_lexer_start = 8;
static const int blt_lexer_first_final = 8;
static const int blt_lexer_error = -1;

static const int blt_lexer_en_main = 8;


/* #line 115 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */

} // be::blt::()

///////////////////////////////////////////////////////////////////////////////
void Lexer::lex_backtick_(gsl::cstring_span<> contents) {
   p_ = contents.data();
   pe_ = p_ + contents.length();
   const char* eof = pe_;
   int cs;
   int act;
   
   
/* #line 30 "L:\\repo\\bengine\\modules\\blt\\src\\lexer.cpp" */
	{
	cs = blt_lexer_start;
	( ts_) = 0;
	( te_) = 0;
	act = 0;
	}

/* #line 127 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
   
/* #line 36 "L:\\repo\\bengine\\modules\\blt\\src\\lexer.cpp" */
	{
	if ( ( p_) == ( pe_) )
		goto _test_eof;
	switch ( cs )
	{
tr0:
/* #line 1 "NONE" */
	{	switch( act ) {
	case 4:
	{{( p_) = ((( te_)))-1;} t_(TokenType::string_literal); check_newlines_(); }
	break;
	case 5:
	{{( p_) = ((( te_)))-1;} t_(TokenType::kw_if); }
	break;
	case 6:
	{{( p_) = ((( te_)))-1;} t_(TokenType::kw_else); }
	break;
	case 7:
	{{( p_) = ((( te_)))-1;} t_(TokenType::kw_while); }
	break;
	case 8:
	{{( p_) = ((( te_)))-1;} t_(TokenType::kw_for); }
	break;
	case 9:
	{{( p_) = ((( te_)))-1;} t_(TokenType::kw_with); }
	break;
	case 10:
	{{( p_) = ((( te_)))-1;} t_(TokenType::kw_each); }
	break;
	case 11:
	{{( p_) = ((( te_)))-1;} t_(TokenType::kw_using); }
	break;
	case 12:
	{{( p_) = ((( te_)))-1;} t_(TokenType::kw_choose); }
	break;
	case 13:
	{{( p_) = ((( te_)))-1;} t_(TokenType::kw_break); }
	break;
	case 14:
	{{( p_) = ((( te_)))-1;} t_(TokenType::kw_continue); }
	break;
	case 15:
	{{( p_) = ((( te_)))-1;} t_(TokenType::kw_until); }
	break;
	case 16:
	{{( p_) = ((( te_)))-1;} t_(TokenType::kw_and); }
	break;
	case 17:
	{{( p_) = ((( te_)))-1;} t_(TokenType::kw_or); }
	break;
	case 18:
	{{( p_) = ((( te_)))-1;} t_(TokenType::kw_not); }
	break;
	case 19:
	{{( p_) = ((( te_)))-1;} t_(TokenType::kw_nil); }
	break;
	case 20:
	{{( p_) = ((( te_)))-1;} t_(TokenType::kw_false); }
	break;
	case 21:
	{{( p_) = ((( te_)))-1;} t_(TokenType::kw_true); }
	break;
	case 57:
	{{( p_) = ((( te_)))-1;} t_(TokenType::identifier); }
	break;
	case 58:
	{{( p_) = ((( te_)))-1;} t_(TokenType::invalid_character); }
	break;
	}
	}
	goto st8;
tr7:
/* #line 53 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{{( p_) = ((( te_)))-1;}{ t_(TokenType::numeric_literal); }}
	goto st8;
tr13:
/* #line 112 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_)+1;{ t_(TokenType::invalid_character); }}
	goto st8;
tr15:
/* #line 48 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_)+1;{
         ls_ = te_;
         ++line_;
      }}
	goto st8;
tr18:
/* #line 107 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_)+1;{ t_(TokenType::pound); }}
	goto st8;
tr19:
/* #line 108 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_)+1;{ t_(TokenType::dollars); }}
	goto st8;
tr20:
/* #line 92 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_)+1;{ t_(TokenType::percent); }}
	goto st8;
tr23:
/* #line 77 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_)+1;{ t_(TokenType::paren_opener); }}
	goto st8;
tr24:
/* #line 78 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_)+1;{ t_(TokenType::paren_closer); }}
	goto st8;
tr25:
/* #line 89 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_)+1;{ t_(TokenType::star); }}
	goto st8;
tr26:
/* #line 87 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_)+1;{ t_(TokenType::plus); }}
	goto st8;
tr27:
/* #line 83 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_)+1;{ t_(TokenType::comma); }}
	goto st8;
tr33:
/* #line 86 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_)+1;{ t_(TokenType::colon); }}
	goto st8;
tr34:
/* #line 74 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_)+1;{ t_(TokenType::semicolon); }}
	goto st8;
tr38:
/* #line 85 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_)+1;{ t_(TokenType::question); }}
	goto st8;
tr40:
/* #line 79 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_)+1;{ t_(TokenType::bracket_opener); }}
	goto st8;
tr41:
/* #line 80 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_)+1;{ t_(TokenType::bracket_closer); }}
	goto st8;
tr42:
/* #line 93 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_)+1;{ t_(TokenType::chevron); }}
	goto st8;
tr54:
/* #line 75 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_)+1;{ t_(TokenType::brace_opener); }}
	goto st8;
tr56:
/* #line 76 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_)+1;{ t_(TokenType::brace_closer); }}
	goto st8;
tr58:
/* #line 47 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_);( p_)--;{ }}
	goto st8;
tr59:
/* #line 48 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_);( p_)--;{
         ls_ = te_;
         ++line_;
      }}
	goto st8;
tr60:
/* #line 94 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_);( p_)--;{ t_(TokenType::amp); }}
	goto st8;
tr61:
/* #line 105 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_)+1;{ t_(TokenType::amp2); }}
	goto st8;
tr62:
/* #line 88 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_);( p_)--;{ t_(TokenType::minus); }}
	goto st8;
tr64:
/* #line 81 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_);( p_)--;{ t_(TokenType::dot); }}
	goto st8;
tr65:
/* #line 82 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_)+1;{ t_(TokenType::dot2); }}
	goto st8;
tr67:
/* #line 53 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_);( p_)--;{ t_(TokenType::numeric_literal); }}
	goto st8;
tr69:
/* #line 90 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_);( p_)--;{ t_(TokenType::slash); }}
	goto st8;
tr70:
/* #line 91 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_)+1;{ t_(TokenType::slash2); }}
	goto st8;
tr72:
/* #line 101 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_);( p_)--;{ t_(TokenType::left); }}
	goto st8;
tr73:
/* #line 98 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_)+1;{ t_(TokenType::left2); }}
	goto st8;
tr74:
/* #line 103 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_)+1;{ t_(TokenType::left_eq); }}
	goto st8;
tr75:
/* #line 84 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_);( p_)--;{ t_(TokenType::eq); }}
	goto st8;
tr76:
/* #line 99 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_)+1;{ t_(TokenType::eq2); }}
	goto st8;
tr77:
/* #line 102 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_);( p_)--;{ t_(TokenType::right); }}
	goto st8;
tr78:
/* #line 104 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_)+1;{ t_(TokenType::right_eq); }}
	goto st8;
tr79:
/* #line 97 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_)+1;{ t_(TokenType::right2); }}
	goto st8;
tr80:
/* #line 110 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_);( p_)--;{ t_(TokenType::identifier); }}
	goto st8;
tr135:
/* #line 95 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_);( p_)--;{ t_(TokenType::bar); }}
	goto st8;
tr136:
/* #line 106 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_)+1;{ t_(TokenType::bar2); }}
	goto st8;
tr137:
/* #line 96 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_);( p_)--;{ t_(TokenType::tilde); }}
	goto st8;
tr138:
/* #line 100 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{( te_) = ( p_)+1;{ t_(TokenType::tilde_eq); }}
	goto st8;
st8:
/* #line 1 "NONE" */
	{( ts_) = 0;}
	if ( ++( p_) == ( pe_) )
		goto _test_eof8;
case 8:
/* #line 1 "NONE" */
	{( ts_) = ( p_);}
/* #line 244 "L:\\repo\\bengine\\modules\\blt\\src\\lexer.cpp" */
	switch( (*( p_)) ) {
		case 10: goto tr15;
		case 13: goto st10;
		case 32: goto st9;
		case 34: goto tr17;
		case 35: goto tr18;
		case 36: goto tr19;
		case 37: goto tr20;
		case 38: goto st12;
		case 39: goto tr22;
		case 40: goto tr23;
		case 41: goto tr24;
		case 42: goto tr25;
		case 43: goto tr26;
		case 44: goto tr27;
		case 45: goto st14;
		case 46: goto st16;
		case 47: goto st19;
		case 48: goto tr31;
		case 58: goto tr33;
		case 59: goto tr34;
		case 60: goto st24;
		case 61: goto st25;
		case 62: goto st26;
		case 63: goto tr38;
		case 91: goto tr40;
		case 93: goto tr41;
		case 94: goto tr42;
		case 95: goto tr39;
		case 97: goto st28;
		case 98: goto st30;
		case 99: goto st34;
		case 101: goto st45;
		case 102: goto st50;
		case 105: goto st55;
		case 110: goto st56;
		case 111: goto st59;
		case 116: goto st60;
		case 117: goto st63;
		case 119: goto st70;
		case 123: goto tr54;
		case 124: goto st76;
		case 125: goto tr56;
		case 126: goto st77;
	}
	if ( (*( p_)) < 49 ) {
		if ( 9 <= (*( p_)) && (*( p_)) <= 12 )
			goto st9;
	} else if ( (*( p_)) > 57 ) {
		if ( (*( p_)) > 90 ) {
			if ( 100 <= (*( p_)) && (*( p_)) <= 122 )
				goto tr39;
		} else if ( (*( p_)) >= 65 )
			goto tr39;
	} else
		goto tr32;
	goto tr13;
st9:
	if ( ++( p_) == ( pe_) )
		goto _test_eof9;
case 9:
	switch( (*( p_)) ) {
		case 9: goto st9;
		case 32: goto st9;
	}
	if ( 11 <= (*( p_)) && (*( p_)) <= 12 )
		goto st9;
	goto tr58;
st10:
	if ( ++( p_) == ( pe_) )
		goto _test_eof10;
case 10:
	if ( (*( p_)) == 10 )
		goto tr15;
	goto tr59;
tr2:
/* #line 1 "NONE" */
	{( te_) = ( p_)+1;}
/* #line 54 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{act = 4;}
	goto st11;
tr17:
/* #line 1 "NONE" */
	{( te_) = ( p_)+1;}
/* #line 112 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{act = 58;}
	goto st11;
st11:
	if ( ++( p_) == ( pe_) )
		goto _test_eof11;
case 11:
/* #line 331 "L:\\repo\\bengine\\modules\\blt\\src\\lexer.cpp" */
	switch( (*( p_)) ) {
		case 34: goto tr2;
		case 92: goto st1;
	}
	goto st0;
st0:
	if ( ++( p_) == ( pe_) )
		goto _test_eof0;
case 0:
	switch( (*( p_)) ) {
		case 34: goto tr2;
		case 92: goto st1;
	}
	goto st0;
st1:
	if ( ++( p_) == ( pe_) )
		goto _test_eof1;
case 1:
	goto st0;
st12:
	if ( ++( p_) == ( pe_) )
		goto _test_eof12;
case 12:
	if ( (*( p_)) == 38 )
		goto tr61;
	goto tr60;
tr5:
/* #line 1 "NONE" */
	{( te_) = ( p_)+1;}
/* #line 54 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{act = 4;}
	goto st13;
tr22:
/* #line 1 "NONE" */
	{( te_) = ( p_)+1;}
/* #line 112 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{act = 58;}
	goto st13;
st13:
	if ( ++( p_) == ( pe_) )
		goto _test_eof13;
case 13:
/* #line 369 "L:\\repo\\bengine\\modules\\blt\\src\\lexer.cpp" */
	switch( (*( p_)) ) {
		case 39: goto tr5;
		case 92: goto st3;
	}
	goto st2;
st2:
	if ( ++( p_) == ( pe_) )
		goto _test_eof2;
case 2:
	switch( (*( p_)) ) {
		case 39: goto tr5;
		case 92: goto st3;
	}
	goto st2;
st3:
	if ( ++( p_) == ( pe_) )
		goto _test_eof3;
case 3:
	goto st2;
st14:
	if ( ++( p_) == ( pe_) )
		goto _test_eof14;
case 14:
	if ( (*( p_)) == 45 )
		goto st15;
	goto tr62;
st15:
	if ( ++( p_) == ( pe_) )
		goto _test_eof15;
case 15:
	switch( (*( p_)) ) {
		case 10: goto tr58;
		case 13: goto tr58;
	}
	goto st15;
st16:
	if ( ++( p_) == ( pe_) )
		goto _test_eof16;
case 16:
	if ( (*( p_)) == 46 )
		goto tr65;
	if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
		goto tr66;
	goto tr64;
tr66:
/* #line 1 "NONE" */
	{( te_) = ( p_)+1;}
	goto st17;
st17:
	if ( ++( p_) == ( pe_) )
		goto _test_eof17;
case 17:
/* #line 420 "L:\\repo\\bengine\\modules\\blt\\src\\lexer.cpp" */
	switch( (*( p_)) ) {
		case 69: goto st4;
		case 101: goto st4;
	}
	if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
		goto tr66;
	goto tr67;
st4:
	if ( ++( p_) == ( pe_) )
		goto _test_eof4;
case 4:
	switch( (*( p_)) ) {
		case 43: goto st5;
		case 45: goto st5;
	}
	if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
		goto st18;
	goto tr7;
st5:
	if ( ++( p_) == ( pe_) )
		goto _test_eof5;
case 5:
	if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
		goto st18;
	goto tr7;
st18:
	if ( ++( p_) == ( pe_) )
		goto _test_eof18;
case 18:
	if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
		goto st18;
	goto tr67;
st19:
	if ( ++( p_) == ( pe_) )
		goto _test_eof19;
case 19:
	if ( (*( p_)) == 47 )
		goto tr70;
	goto tr69;
tr31:
/* #line 1 "NONE" */
	{( te_) = ( p_)+1;}
	goto st20;
st20:
	if ( ++( p_) == ( pe_) )
		goto _test_eof20;
case 20:
/* #line 466 "L:\\repo\\bengine\\modules\\blt\\src\\lexer.cpp" */
	switch( (*( p_)) ) {
		case 46: goto tr66;
		case 69: goto st4;
		case 88: goto st6;
		case 101: goto st4;
		case 120: goto st6;
	}
	if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
		goto tr32;
	goto tr67;
tr32:
/* #line 1 "NONE" */
	{( te_) = ( p_)+1;}
	goto st21;
st21:
	if ( ++( p_) == ( pe_) )
		goto _test_eof21;
case 21:
/* #line 483 "L:\\repo\\bengine\\modules\\blt\\src\\lexer.cpp" */
	switch( (*( p_)) ) {
		case 46: goto tr66;
		case 69: goto st4;
		case 101: goto st4;
	}
	if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
		goto tr32;
	goto tr67;
st6:
	if ( ++( p_) == ( pe_) )
		goto _test_eof6;
case 6:
	if ( (*( p_)) == 46 )
		goto st7;
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr11;
	} else if ( (*( p_)) > 70 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 102 )
			goto tr11;
	} else
		goto tr11;
	goto tr7;
st7:
	if ( ++( p_) == ( pe_) )
		goto _test_eof7;
case 7:
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr12;
	} else if ( (*( p_)) > 70 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 102 )
			goto tr12;
	} else
		goto tr12;
	goto tr7;
tr12:
/* #line 1 "NONE" */
	{( te_) = ( p_)+1;}
	goto st22;
st22:
	if ( ++( p_) == ( pe_) )
		goto _test_eof22;
case 22:
/* #line 526 "L:\\repo\\bengine\\modules\\blt\\src\\lexer.cpp" */
	switch( (*( p_)) ) {
		case 80: goto st4;
		case 112: goto st4;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr12;
	} else if ( (*( p_)) > 70 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 102 )
			goto tr12;
	} else
		goto tr12;
	goto tr67;
tr11:
/* #line 1 "NONE" */
	{( te_) = ( p_)+1;}
	goto st23;
st23:
	if ( ++( p_) == ( pe_) )
		goto _test_eof23;
case 23:
/* #line 546 "L:\\repo\\bengine\\modules\\blt\\src\\lexer.cpp" */
	switch( (*( p_)) ) {
		case 46: goto tr12;
		case 80: goto st4;
		case 112: goto st4;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr11;
	} else if ( (*( p_)) > 70 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 102 )
			goto tr11;
	} else
		goto tr11;
	goto tr67;
st24:
	if ( ++( p_) == ( pe_) )
		goto _test_eof24;
case 24:
	switch( (*( p_)) ) {
		case 60: goto tr73;
		case 61: goto tr74;
	}
	goto tr72;
st25:
	if ( ++( p_) == ( pe_) )
		goto _test_eof25;
case 25:
	if ( (*( p_)) == 61 )
		goto tr76;
	goto tr75;
st26:
	if ( ++( p_) == ( pe_) )
		goto _test_eof26;
case 26:
	switch( (*( p_)) ) {
		case 61: goto tr78;
		case 62: goto tr79;
	}
	goto tr77;
tr39:
/* #line 1 "NONE" */
	{( te_) = ( p_)+1;}
/* #line 110 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{act = 57;}
	goto st27;
tr82:
/* #line 1 "NONE" */
	{( te_) = ( p_)+1;}
/* #line 67 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{act = 16;}
	goto st27;
tr86:
/* #line 1 "NONE" */
	{( te_) = ( p_)+1;}
/* #line 64 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{act = 13;}
	goto st27;
tr92:
/* #line 1 "NONE" */
	{( te_) = ( p_)+1;}
/* #line 63 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{act = 12;}
	goto st27;
tr98:
/* #line 1 "NONE" */
	{( te_) = ( p_)+1;}
/* #line 65 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{act = 14;}
	goto st27;
tr102:
/* #line 1 "NONE" */
	{( te_) = ( p_)+1;}
/* #line 61 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{act = 10;}
	goto st27;
tr104:
/* #line 1 "NONE" */
	{( te_) = ( p_)+1;}
/* #line 57 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{act = 6;}
	goto st27;
tr109:
/* #line 1 "NONE" */
	{( te_) = ( p_)+1;}
/* #line 71 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{act = 20;}
	goto st27;
tr110:
/* #line 1 "NONE" */
	{( te_) = ( p_)+1;}
/* #line 59 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{act = 8;}
	goto st27;
tr111:
/* #line 1 "NONE" */
	{( te_) = ( p_)+1;}
/* #line 56 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{act = 5;}
	goto st27;
tr114:
/* #line 1 "NONE" */
	{( te_) = ( p_)+1;}
/* #line 70 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{act = 19;}
	goto st27;
tr115:
/* #line 1 "NONE" */
	{( te_) = ( p_)+1;}
/* #line 69 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{act = 18;}
	goto st27;
tr116:
/* #line 1 "NONE" */
	{( te_) = ( p_)+1;}
/* #line 68 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{act = 17;}
	goto st27;
tr119:
/* #line 1 "NONE" */
	{( te_) = ( p_)+1;}
/* #line 72 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{act = 21;}
	goto st27;
tr124:
/* #line 1 "NONE" */
	{( te_) = ( p_)+1;}
/* #line 66 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{act = 15;}
	goto st27;
tr127:
/* #line 1 "NONE" */
	{( te_) = ( p_)+1;}
/* #line 62 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{act = 11;}
	goto st27;
tr132:
/* #line 1 "NONE" */
	{( te_) = ( p_)+1;}
/* #line 58 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{act = 7;}
	goto st27;
tr134:
/* #line 1 "NONE" */
	{( te_) = ( p_)+1;}
/* #line 60 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */
	{act = 9;}
	goto st27;
st27:
	if ( ++( p_) == ( pe_) )
		goto _test_eof27;
case 27:
/* #line 661 "L:\\repo\\bengine\\modules\\blt\\src\\lexer.cpp" */
	if ( (*( p_)) == 95 )
		goto tr39;
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr0;
st28:
	if ( ++( p_) == ( pe_) )
		goto _test_eof28;
case 28:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 110: goto st29;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st29:
	if ( ++( p_) == ( pe_) )
		goto _test_eof29;
case 29:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 100: goto tr82;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st30:
	if ( ++( p_) == ( pe_) )
		goto _test_eof30;
case 30:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 114: goto st31;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st31:
	if ( ++( p_) == ( pe_) )
		goto _test_eof31;
case 31:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 101: goto st32;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st32:
	if ( ++( p_) == ( pe_) )
		goto _test_eof32;
case 32:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 97: goto st33;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 98 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st33:
	if ( ++( p_) == ( pe_) )
		goto _test_eof33;
case 33:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 107: goto tr86;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st34:
	if ( ++( p_) == ( pe_) )
		goto _test_eof34;
case 34:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 104: goto st35;
		case 111: goto st39;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st35:
	if ( ++( p_) == ( pe_) )
		goto _test_eof35;
case 35:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 111: goto st36;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st36:
	if ( ++( p_) == ( pe_) )
		goto _test_eof36;
case 36:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 111: goto st37;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st37:
	if ( ++( p_) == ( pe_) )
		goto _test_eof37;
case 37:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 115: goto st38;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st38:
	if ( ++( p_) == ( pe_) )
		goto _test_eof38;
case 38:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 101: goto tr92;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st39:
	if ( ++( p_) == ( pe_) )
		goto _test_eof39;
case 39:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 110: goto st40;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st40:
	if ( ++( p_) == ( pe_) )
		goto _test_eof40;
case 40:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 116: goto st41;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st41:
	if ( ++( p_) == ( pe_) )
		goto _test_eof41;
case 41:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 105: goto st42;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st42:
	if ( ++( p_) == ( pe_) )
		goto _test_eof42;
case 42:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 110: goto st43;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st43:
	if ( ++( p_) == ( pe_) )
		goto _test_eof43;
case 43:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 117: goto st44;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st44:
	if ( ++( p_) == ( pe_) )
		goto _test_eof44;
case 44:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 101: goto tr98;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st45:
	if ( ++( p_) == ( pe_) )
		goto _test_eof45;
case 45:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 97: goto st46;
		case 108: goto st48;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 98 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st46:
	if ( ++( p_) == ( pe_) )
		goto _test_eof46;
case 46:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 99: goto st47;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st47:
	if ( ++( p_) == ( pe_) )
		goto _test_eof47;
case 47:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 104: goto tr102;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st48:
	if ( ++( p_) == ( pe_) )
		goto _test_eof48;
case 48:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 115: goto st49;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st49:
	if ( ++( p_) == ( pe_) )
		goto _test_eof49;
case 49:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 101: goto tr104;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st50:
	if ( ++( p_) == ( pe_) )
		goto _test_eof50;
case 50:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 97: goto st51;
		case 111: goto st54;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 98 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st51:
	if ( ++( p_) == ( pe_) )
		goto _test_eof51;
case 51:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 108: goto st52;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st52:
	if ( ++( p_) == ( pe_) )
		goto _test_eof52;
case 52:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 115: goto st53;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st53:
	if ( ++( p_) == ( pe_) )
		goto _test_eof53;
case 53:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 101: goto tr109;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st54:
	if ( ++( p_) == ( pe_) )
		goto _test_eof54;
case 54:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 114: goto tr110;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st55:
	if ( ++( p_) == ( pe_) )
		goto _test_eof55;
case 55:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 102: goto tr111;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st56:
	if ( ++( p_) == ( pe_) )
		goto _test_eof56;
case 56:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 105: goto st57;
		case 111: goto st58;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st57:
	if ( ++( p_) == ( pe_) )
		goto _test_eof57;
case 57:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 108: goto tr114;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st58:
	if ( ++( p_) == ( pe_) )
		goto _test_eof58;
case 58:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 116: goto tr115;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st59:
	if ( ++( p_) == ( pe_) )
		goto _test_eof59;
case 59:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 114: goto tr116;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st60:
	if ( ++( p_) == ( pe_) )
		goto _test_eof60;
case 60:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 114: goto st61;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st61:
	if ( ++( p_) == ( pe_) )
		goto _test_eof61;
case 61:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 117: goto st62;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st62:
	if ( ++( p_) == ( pe_) )
		goto _test_eof62;
case 62:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 101: goto tr119;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st63:
	if ( ++( p_) == ( pe_) )
		goto _test_eof63;
case 63:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 110: goto st64;
		case 115: goto st67;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st64:
	if ( ++( p_) == ( pe_) )
		goto _test_eof64;
case 64:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 116: goto st65;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st65:
	if ( ++( p_) == ( pe_) )
		goto _test_eof65;
case 65:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 105: goto st66;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st66:
	if ( ++( p_) == ( pe_) )
		goto _test_eof66;
case 66:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 108: goto tr124;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st67:
	if ( ++( p_) == ( pe_) )
		goto _test_eof67;
case 67:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 105: goto st68;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st68:
	if ( ++( p_) == ( pe_) )
		goto _test_eof68;
case 68:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 110: goto st69;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st69:
	if ( ++( p_) == ( pe_) )
		goto _test_eof69;
case 69:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 103: goto tr127;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st70:
	if ( ++( p_) == ( pe_) )
		goto _test_eof70;
case 70:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 104: goto st71;
		case 105: goto st74;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st71:
	if ( ++( p_) == ( pe_) )
		goto _test_eof71;
case 71:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 105: goto st72;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st72:
	if ( ++( p_) == ( pe_) )
		goto _test_eof72;
case 72:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 108: goto st73;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st73:
	if ( ++( p_) == ( pe_) )
		goto _test_eof73;
case 73:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 101: goto tr132;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st74:
	if ( ++( p_) == ( pe_) )
		goto _test_eof74;
case 74:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 116: goto st75;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st75:
	if ( ++( p_) == ( pe_) )
		goto _test_eof75;
case 75:
	switch( (*( p_)) ) {
		case 95: goto tr39;
		case 104: goto tr134;
	}
	if ( (*( p_)) < 65 ) {
		if ( 48 <= (*( p_)) && (*( p_)) <= 57 )
			goto tr39;
	} else if ( (*( p_)) > 90 ) {
		if ( 97 <= (*( p_)) && (*( p_)) <= 122 )
			goto tr39;
	} else
		goto tr39;
	goto tr80;
st76:
	if ( ++( p_) == ( pe_) )
		goto _test_eof76;
case 76:
	if ( (*( p_)) == 124 )
		goto tr136;
	goto tr135;
st77:
	if ( ++( p_) == ( pe_) )
		goto _test_eof77;
case 77:
	if ( (*( p_)) == 61 )
		goto tr138;
	goto tr137;
	}
	_test_eof8: cs = 8; goto _test_eof; 
	_test_eof9: cs = 9; goto _test_eof; 
	_test_eof10: cs = 10; goto _test_eof; 
	_test_eof11: cs = 11; goto _test_eof; 
	_test_eof0: cs = 0; goto _test_eof; 
	_test_eof1: cs = 1; goto _test_eof; 
	_test_eof12: cs = 12; goto _test_eof; 
	_test_eof13: cs = 13; goto _test_eof; 
	_test_eof2: cs = 2; goto _test_eof; 
	_test_eof3: cs = 3; goto _test_eof; 
	_test_eof14: cs = 14; goto _test_eof; 
	_test_eof15: cs = 15; goto _test_eof; 
	_test_eof16: cs = 16; goto _test_eof; 
	_test_eof17: cs = 17; goto _test_eof; 
	_test_eof4: cs = 4; goto _test_eof; 
	_test_eof5: cs = 5; goto _test_eof; 
	_test_eof18: cs = 18; goto _test_eof; 
	_test_eof19: cs = 19; goto _test_eof; 
	_test_eof20: cs = 20; goto _test_eof; 
	_test_eof21: cs = 21; goto _test_eof; 
	_test_eof6: cs = 6; goto _test_eof; 
	_test_eof7: cs = 7; goto _test_eof; 
	_test_eof22: cs = 22; goto _test_eof; 
	_test_eof23: cs = 23; goto _test_eof; 
	_test_eof24: cs = 24; goto _test_eof; 
	_test_eof25: cs = 25; goto _test_eof; 
	_test_eof26: cs = 26; goto _test_eof; 
	_test_eof27: cs = 27; goto _test_eof; 
	_test_eof28: cs = 28; goto _test_eof; 
	_test_eof29: cs = 29; goto _test_eof; 
	_test_eof30: cs = 30; goto _test_eof; 
	_test_eof31: cs = 31; goto _test_eof; 
	_test_eof32: cs = 32; goto _test_eof; 
	_test_eof33: cs = 33; goto _test_eof; 
	_test_eof34: cs = 34; goto _test_eof; 
	_test_eof35: cs = 35; goto _test_eof; 
	_test_eof36: cs = 36; goto _test_eof; 
	_test_eof37: cs = 37; goto _test_eof; 
	_test_eof38: cs = 38; goto _test_eof; 
	_test_eof39: cs = 39; goto _test_eof; 
	_test_eof40: cs = 40; goto _test_eof; 
	_test_eof41: cs = 41; goto _test_eof; 
	_test_eof42: cs = 42; goto _test_eof; 
	_test_eof43: cs = 43; goto _test_eof; 
	_test_eof44: cs = 44; goto _test_eof; 
	_test_eof45: cs = 45; goto _test_eof; 
	_test_eof46: cs = 46; goto _test_eof; 
	_test_eof47: cs = 47; goto _test_eof; 
	_test_eof48: cs = 48; goto _test_eof; 
	_test_eof49: cs = 49; goto _test_eof; 
	_test_eof50: cs = 50; goto _test_eof; 
	_test_eof51: cs = 51; goto _test_eof; 
	_test_eof52: cs = 52; goto _test_eof; 
	_test_eof53: cs = 53; goto _test_eof; 
	_test_eof54: cs = 54; goto _test_eof; 
	_test_eof55: cs = 55; goto _test_eof; 
	_test_eof56: cs = 56; goto _test_eof; 
	_test_eof57: cs = 57; goto _test_eof; 
	_test_eof58: cs = 58; goto _test_eof; 
	_test_eof59: cs = 59; goto _test_eof; 
	_test_eof60: cs = 60; goto _test_eof; 
	_test_eof61: cs = 61; goto _test_eof; 
	_test_eof62: cs = 62; goto _test_eof; 
	_test_eof63: cs = 63; goto _test_eof; 
	_test_eof64: cs = 64; goto _test_eof; 
	_test_eof65: cs = 65; goto _test_eof; 
	_test_eof66: cs = 66; goto _test_eof; 
	_test_eof67: cs = 67; goto _test_eof; 
	_test_eof68: cs = 68; goto _test_eof; 
	_test_eof69: cs = 69; goto _test_eof; 
	_test_eof70: cs = 70; goto _test_eof; 
	_test_eof71: cs = 71; goto _test_eof; 
	_test_eof72: cs = 72; goto _test_eof; 
	_test_eof73: cs = 73; goto _test_eof; 
	_test_eof74: cs = 74; goto _test_eof; 
	_test_eof75: cs = 75; goto _test_eof; 
	_test_eof76: cs = 76; goto _test_eof; 
	_test_eof77: cs = 77; goto _test_eof; 

	_test_eof: {}
	if ( ( p_) == eof )
	{
	switch ( cs ) {
	case 9: goto tr58;
	case 10: goto tr59;
	case 11: goto tr0;
	case 0: goto tr0;
	case 1: goto tr0;
	case 12: goto tr60;
	case 13: goto tr0;
	case 2: goto tr0;
	case 3: goto tr0;
	case 14: goto tr62;
	case 15: goto tr58;
	case 16: goto tr64;
	case 17: goto tr67;
	case 4: goto tr7;
	case 5: goto tr7;
	case 18: goto tr67;
	case 19: goto tr69;
	case 20: goto tr67;
	case 21: goto tr67;
	case 6: goto tr7;
	case 7: goto tr7;
	case 22: goto tr67;
	case 23: goto tr67;
	case 24: goto tr72;
	case 25: goto tr75;
	case 26: goto tr77;
	case 27: goto tr0;
	case 28: goto tr80;
	case 29: goto tr80;
	case 30: goto tr80;
	case 31: goto tr80;
	case 32: goto tr80;
	case 33: goto tr80;
	case 34: goto tr80;
	case 35: goto tr80;
	case 36: goto tr80;
	case 37: goto tr80;
	case 38: goto tr80;
	case 39: goto tr80;
	case 40: goto tr80;
	case 41: goto tr80;
	case 42: goto tr80;
	case 43: goto tr80;
	case 44: goto tr80;
	case 45: goto tr80;
	case 46: goto tr80;
	case 47: goto tr80;
	case 48: goto tr80;
	case 49: goto tr80;
	case 50: goto tr80;
	case 51: goto tr80;
	case 52: goto tr80;
	case 53: goto tr80;
	case 54: goto tr80;
	case 55: goto tr80;
	case 56: goto tr80;
	case 57: goto tr80;
	case 58: goto tr80;
	case 59: goto tr80;
	case 60: goto tr80;
	case 61: goto tr80;
	case 62: goto tr80;
	case 63: goto tr80;
	case 64: goto tr80;
	case 65: goto tr80;
	case 66: goto tr80;
	case 67: goto tr80;
	case 68: goto tr80;
	case 69: goto tr80;
	case 70: goto tr80;
	case 71: goto tr80;
	case 72: goto tr80;
	case 73: goto tr80;
	case 74: goto tr80;
	case 75: goto tr80;
	case 76: goto tr135;
	case 77: goto tr137;
	}
	}

	}

/* #line 128 "L:\\repo\\bengine\\modules\\blt\\meta\\lexer.rl" */

   if (cs == blt_lexer_error) {
      throw RecoverableException<void>("Lexer error!");
   }
}

///////////////////////////////////////////////////////////////////////////////
Lexer::Lexer(gsl::cstring_span<> input)
   : input_(input)
{ }

///////////////////////////////////////////////////////////////////////////////
void Lexer::lex_all() {
   tokens_.clear();
   tokens_.reserve(std::max((std::size_t)32, std::min((std::size_t)input_.length(),
      (std::size_t)(input_.length() * BE_BLT_TOKEN_ESTIMATE_RATIO))));

   ps_ = input_.data();
   const char* i = ps_;
   const char* end = ps_ + input_.length();
   ls_ = ts_ = ps_;
   const char* last_ls = ls_;
   line_ = 1;
   U32 last_line = line_;

   doc:
      if (i == end) {
         te_ = i;
         if (ts_ != te_) {
            t_(TokenType::document);
         }
         return;
      }
      if (*i == '\n') {
         ++last_line;
         last_ls = i + 1;
      } else if (*i == '`') {
         te_ = i;
         if (ts_ != te_) {
            t_(TokenType::document);
         }
         ts_ = ++i;
         line_ = last_line;
         ls_ = last_ls;
         goto backtick;
      }
      ++i;
      goto doc;

   backtick:
      if (i == end) {
         te_ = i;
         if (ts_ != te_) {
            std::ptrdiff_t offset = ts_ - ps_;
            std::ptrdiff_t length = te_ - ts_;
            lex_backtick_(input_.subspan(offset, length));
         }
         return;
      }
      if (*i == '!') {
         te_ = i;
         if (ts_ != te_) {
            std::ptrdiff_t offset = ts_ - ps_;
            std::ptrdiff_t length = te_ - ts_;
            lex_backtick_(input_.subspan(offset, length));
         }
         ts_ = ++i;
         last_line = line_;
         last_ls = ls_;
         goto rawlua;
      } else if (*i == '`') {
         te_ = i;
         if (ts_ == te_) {
            --ts_;
            if (*ts_ == '`') {
               t_(TokenType::document);
            }
         } else {
            std::ptrdiff_t offset = ts_ - ps_;
            std::ptrdiff_t length = te_ - ts_;
            lex_backtick_(input_.subspan(offset, length));
         }
         ts_ = ++i;
         last_line = line_;
         last_ls = ls_;
         goto doc;
      }
      ++i;
      goto backtick;

   rawlua:
      if (i == end) {
         te_ = i;
         if (ts_ != te_) {
            t_(TokenType::lua);
         }
         return;
      }
      if (*i == '\n') {
         ++last_line;
         last_ls = i + 1;
      } else if (*i == '!') {
         te_ = i;
         if (ts_ != te_) {
            t_(TokenType::lua);
         }
         ts_ = ++i;
         line_ = last_line;
         ls_ = last_ls;
         goto backtick;
      } else if (*i == '`') {
         te_ = i;
         if (ts_ != te_) {
            t_(TokenType::lua);
         }
         ts_ = ++i;
         line_ = last_line;
         ls_ = last_ls;
         goto doc;
      }
      ++i;
      goto rawlua;
}

///////////////////////////////////////////////////////////////////////////////
const std::vector<TokenData>& Lexer::tokens() {
   return tokens_;
}

///////////////////////////////////////////////////////////////////////////////
void Lexer::t_(TokenType type) {
   std::ptrdiff_t offset = ts_ - ps_;
   std::ptrdiff_t length = te_ - ts_;
   U32 line = line_;
   U32 column = (U32)(ts_ - ls_ + 1);
   tokens_.push_back({ input_.subspan(offset, length), type, { line, column } });
}

///////////////////////////////////////////////////////////////////////////////
void Lexer::t_(TokenType type, U32 line, U32 column, gsl::cstring_span<> text) {
   tokens_.push_back({ text, type, { line, column } });
}

///////////////////////////////////////////////////////////////////////////////
void Lexer::check_newlines_() {
   bool skip_lf = false;
   for (auto& c : tokens_.back().text) {
      if (c == '\r') {
	     ls_ = &c + 1;
		 ++line_;
		 skip_lf = true;
	  } else if (c == '\n') {
	     ls_ = &c + 1;
		 if (skip_lf) {
		    skip_lf = false;
		 } else {
		    ++line_;
		 }
	  } else {
	     skip_lf = false;
	  }
   }
}

} // be::blt
} // be
