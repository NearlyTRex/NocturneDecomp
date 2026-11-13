; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CConstructRed * __cdecl core_construc_cpp_CConstructRed_ctor_FUN_00444600(CConstructRed *this_ptr)
;
; Parameters:
; CConstructRed *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_construc.cpp_FUN_004445d0 at 004445e3
;
; Called Functions:
;   core_construc.cpp_CConstruct_ctor_FUN_00442420
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00444600
        ;   Label: core_construc.cpp_CConstructRed_ctor_FUN_00444600
    PUSH EDX                            ; 00444604
    CALL core_construc.cpp_CConstruct_ctor_FUN_00442420 ; 00444605
        ;   XREF to: 00442420 (UNCONDITIONAL_CALL)  ; CConstruct * core_construc.cpp_CConstruct_ctor_FUN_00442420(CConstruct * this_ptr)
    MOV dword ptr [EAX + 0x154],0x5dd9c4 ; 0044460a
    MOV dword ptr [EAX + 0x2538],0x42820000 ; 00444614
    MOV dword ptr [EAX + 0xce5c],0x41a00000 ; 0044461e
    MOV dword ptr [EAX + 0xce60],0x41200000 ; 00444628
    MOV dword ptr [EAX + 0xd84c],0x2    ; 00444632
    MOV dword ptr [EAX + 0xd85c],0x2    ; 0044463c
    ADD ESP,0x4                         ; 00444646
    FLD float ptr [EAX + 0x2538]        ; 00444649
    CALL crt_math.c_round_FUN_005a3120  ; 0044464f
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EAX + 0xd17c]      ; 00444654
    RET                                 ; 0044465a

