/* Generated by Nim Compiler v1.2.0 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <stdio.h>
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
#define nimfr_(x, y)
#define nimln_(x, y)
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack__7fytPA5bBsob6See21YMRA tyObject_GcStack__7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple__ujsjpB2O9cjj3uDHsXbnSzg tyTuple__ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc__ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc__ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, tyProc__T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
struct tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack__7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ* tyArray__SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef NU32 tyArray__BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg* tyArray__N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray__N1u1nqOgmuJN9cSZrnMHgOQ tyArray__B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw* tyArray__lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA {
tyArray__lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* tyArray__0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw {
tyArray__0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple__ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple__ujsjpB2O9cjj3uDHsXbnSzg tyArray__LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray__LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray__SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
NU32 flBitmap;
tyArray__BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray__B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack__7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
NI zctThreshold;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w additionalRoots;
NI gcThreadId;
};
typedef NimStringDesc* tyArray__nHXaesL0DJZHyVS07ARPRA[1];
typedef NimStringDesc* tyArray__24KAM9afIUgUaqBaEBB6r9bg[3];
N_LIB_PRIVATE N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, TM__ENNiv6OxMQIyKYJkX63qDQ_2)(void);
N_LIB_PRIVATE N_NIMCALL(void, nimRegisterGlobalMarker)(tyProc__T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readLine__IfmAdseskhTUnfEYpOo5fA)(FILE* f);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef__AT1eRuflKWyTTBdLjEDZbg_3system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, pluspercent___dgYAo7RfdUVVpvkfKDym8wsystem)(NI x, NI y);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem)(void* usr);
static N_INLINE(NI, minuspercent___dgYAo7RfdUVVpvkfKDym8w_2system)(NI x, NI y);
static N_INLINE(void, decRef__AT1eRuflKWyTTBdLjEDZbgsystem)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NIM_BOOL, ltpercent___hPljn3JCDQ00ua1R07X9bxQsystem)(NI x, NI y);
static N_INLINE(void, rtlAddZCT__AT1eRuflKWyTTBdLjEDZbg_2system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT__Y66tOYFjgwJ0k4aLz4bc0Q)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NIMCALL(void, echoBinSafe)(NimStringDesc** args, NI argsLen_0);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, equalMem__9bGgqEk7RXXl6eqM9c1HdELAsystem)(void* a, void* b, NI size);
static N_INLINE(int, nimCmpMem)(void* a, void* b, NI size);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, initStackBottomWith)(void* locals);
N_LIB_PRIVATE N_NOINLINE(void, nimGC_setStackBottom)(void* theStackBottom);
N_LIB_PRIVATE N_NIMCALL(void, systemDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, systemInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, NimMainModule)(void);
extern TNimType NTI__77mFvmsOLKik79ci2hXkHEg_;
STRING_LITERAL(TM__ENNiv6OxMQIyKYJkX63qDQ_4, "Poor soul, you lost your name\?", 30);
static NIM_CONST tyArray__nHXaesL0DJZHyVS07ARPRA TM__ENNiv6OxMQIyKYJkX63qDQ_3 = {((NimStringDesc*) &TM__ENNiv6OxMQIyKYJkX63qDQ_4)}
;
STRING_LITERAL(TM__ENNiv6OxMQIyKYJkX63qDQ_5, "name", 4);
STRING_LITERAL(TM__ENNiv6OxMQIyKYJkX63qDQ_7, "Very funny, your name is name.", 30);
static NIM_CONST tyArray__nHXaesL0DJZHyVS07ARPRA TM__ENNiv6OxMQIyKYJkX63qDQ_6 = {((NimStringDesc*) &TM__ENNiv6OxMQIyKYJkX63qDQ_7)}
;
STRING_LITERAL(TM__ENNiv6OxMQIyKYJkX63qDQ_8, "Hi, ", 4);
STRING_LITERAL(TM__ENNiv6OxMQIyKYJkX63qDQ_9, "!", 1);
N_LIB_PRIVATE NimStringDesc* name__Sd7nFHd9cHaLMTMUYERGA6A;
extern tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch__IcYaEuuWivYAS86vFMTS3Q;
static N_NIMCALL(void, TM__ENNiv6OxMQIyKYJkX63qDQ_2)(void) {
	nimGCvisit((void*)name__Sd7nFHd9cHaLMTMUYERGA6A, 0);
}
static N_INLINE(NI, pluspercent___dgYAo7RfdUVVpvkfKDym8wsystem)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU64)(((NU) (x))) + (NU64)(((NU) (y))))));
	return result;
}
static N_INLINE(void, incRef__AT1eRuflKWyTTBdLjEDZbg_3system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = pluspercent___dgYAo7RfdUVVpvkfKDym8wsystem((*c).refcount, ((NI) 8));
}
static N_INLINE(NI, minuspercent___dgYAo7RfdUVVpvkfKDym8w_2system)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU64)(((NU) (x))) - (NU64)(((NU) (y))))));
	return result;
}
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem)(void* usr) {
	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* result;
	NI T1_;
	result = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	T1_ = (NI)0;
	T1_ = minuspercent___dgYAo7RfdUVVpvkfKDym8w_2system(((NI) (ptrdiff_t) (usr)), ((NI) 16));
	result = ((tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*) (T1_));
	return result;
}
static N_INLINE(NIM_BOOL, ltpercent___hPljn3JCDQ00ua1R07X9bxQsystem)(NI x, NI y) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = ((NU64)(((NU) (x))) < (NU64)(((NU) (y))));
	return result;
}
static N_INLINE(void, rtlAddZCT__AT1eRuflKWyTTBdLjEDZbg_2system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT__Y66tOYFjgwJ0k4aLz4bc0Q((&gch__IcYaEuuWivYAS86vFMTS3Q.zct), c);
}
static N_INLINE(void, decRef__AT1eRuflKWyTTBdLjEDZbgsystem)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = minuspercent___dgYAo7RfdUVVpvkfKDym8w_2system((*c).refcount, ((NI) 8));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = ltpercent___hPljn3JCDQ00ua1R07X9bxQsystem((*c).refcount, ((NI) 8));
		if (!T3_) goto LA4_;
		rtlAddZCT__AT1eRuflKWyTTBdLjEDZbg_2system(c);
	}
	LA4_: ;
}
static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem(src);
		incRef__AT1eRuflKWyTTBdLjEDZbg_3system(T5_);
	}
	LA3_: ;
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem((*dest));
		decRef__AT1eRuflKWyTTBdLjEDZbgsystem(T10_);
	}
	LA8_: ;
	(*dest) = src;
}
static N_INLINE(int, nimCmpMem)(void* a, void* b, NI size) {
	int result;
	result = (int)0;
	result = memcmp(a, b, ((size_t) (size)));
	return result;
}
static N_INLINE(NIM_BOOL, equalMem__9bGgqEk7RXXl6eqM9c1HdELAsystem)(void* a, void* b, NI size) {
	NIM_BOOL result;
	int T1_;
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = nimCmpMem(a, b, size);
	result = (T1_ == ((NI32) 0));
	return result;
}
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NI alen;
	NI blen;
{	result = (NIM_BOOL)0;
	alen = (a ? a->Sup.len : 0);
	blen = (b ? b->Sup.len : 0);
	{
		if (!(alen == blen)) goto LA3_;
		{
			if (!(alen == ((NI) 0))) goto LA7_;
			result = NIM_TRUE;
			goto BeforeRet_;
		}
		LA7_: ;
		result = equalMem__9bGgqEk7RXXl6eqM9c1HdELAsystem(((void*) ((&a->data[((NI) 0)]))), ((void*) ((&b->data[((NI) 0)]))), ((NI) (alen)));
		goto BeforeRet_;
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory(p, ((int) 0), size);
}
static N_INLINE(void, initStackBottomWith)(void* locals) {
	nimGC_setStackBottom(locals);
}

N_LIB_PRIVATE void PreMainInner(void) {
}

N_LIB_PRIVATE int cmdCount;
N_LIB_PRIVATE char** cmdLine;
N_LIB_PRIVATE char** gEnv;
N_LIB_PRIVATE void PreMain(void) {
	void (*volatile inner)(void);
	inner = PreMainInner;
	systemDatInit000();
	initStackBottomWith((void *)&inner);
	systemInit000();
	(*inner)();
}

N_LIB_PRIVATE N_CDECL(void, NimMainInner)(void) {
	NimMainModule();
}

N_CDECL(void, NimMain)(void) {
	void (*volatile inner)(void);
	PreMain();
	inner = NimMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int main(int argc, char** args, char** env) {
	cmdLine = args;
	cmdCount = argc;
	gEnv = env;
	NimMain();
	return nim_program_result;
}

N_LIB_PRIVATE N_NIMCALL(void, NimMainModule)(void) {
{

	nimRegisterGlobalMarker(TM__ENNiv6OxMQIyKYJkX63qDQ_2);

	asgnRef((void**) (&name__Sd7nFHd9cHaLMTMUYERGA6A), readLine__IfmAdseskhTUnfEYpOo5fA(__stdinp));
	{
		if (!((name__Sd7nFHd9cHaLMTMUYERGA6A ? name__Sd7nFHd9cHaLMTMUYERGA6A->Sup.len : 0) == 0)) goto LA3_;
		echoBinSafe(TM__ENNiv6OxMQIyKYJkX63qDQ_3, 1);
	}
	goto LA1_;
	LA3_: ;
	{
		if (!eqStrings(name__Sd7nFHd9cHaLMTMUYERGA6A, ((NimStringDesc*) &TM__ENNiv6OxMQIyKYJkX63qDQ_5))) goto LA6_;
		echoBinSafe(TM__ENNiv6OxMQIyKYJkX63qDQ_6, 1);
	}
	goto LA1_;
	LA6_: ;
	{
		tyArray__24KAM9afIUgUaqBaEBB6r9bg T9_;
		nimZeroMem((void*)T9_, sizeof(tyArray__24KAM9afIUgUaqBaEBB6r9bg));
		T9_[0] = copyString(((NimStringDesc*) &TM__ENNiv6OxMQIyKYJkX63qDQ_8));
		T9_[1] = copyString(name__Sd7nFHd9cHaLMTMUYERGA6A);
		T9_[2] = copyString(((NimStringDesc*) &TM__ENNiv6OxMQIyKYJkX63qDQ_9));
		echoBinSafe(T9_, 3);
	}
	LA1_: ;
}
}
