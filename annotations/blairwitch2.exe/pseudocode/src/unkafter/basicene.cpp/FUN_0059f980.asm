; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_basicene_cpp_FUN_0059f980(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[8]:
;   core_confedrt.cpp_FUN_005a14a0 at 005a14a5
;   core_confzomb.cpp_FUN_005a2630 at 005a2636
;   core_dog1.cpp_FUN_005ac720 at 005ac725
;   core_ghostchi.cpp_FUN_005a9b70 at 005a9b76
;   core_hag.cpp_FUN_005ab790 at 005ab797
;   core_hand.cpp_FUN_005aa4a0 at 005aa54c
;   core_robin.cpp_FUN_005a6760 at 005a6767
;   core_unionzom.cpp_FUN_005a4710 at 005a4716
;
; Referenced Globals:
;   undefined4 DAT_005ef9c7
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   core_charactr.cpp_FUN_004268b0
;   crt_math.c_round_FUN_005b7ff0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0059f980
        ;   Label: unkafter_basicene.cpp_FUN_0059f980
    PUSH EBP                            ; 0059f981
    SUB ESP,0x8                         ; 0059f982
    MOV ESI,dword ptr [ESP + 0x14]      ; 0059f985
    MOV EDX,dword ptr [ESI + 0xfc]      ; 0059f989
    XOR EAX,EAX                         ; 0059f98f
    TEST EDX,EDX                        ; 0059f991
    JNZ 0x0059f99b                      ; 0059f993
        ;   XREF to: 0059f99b (CONDITIONAL_JUMP)  ; LAB_0059f99b
    ADD ESP,0x8                         ; 0059f995
    POP EBP                             ; 0059f998
    POP ESI                             ; 0059f999
    RET                                 ; 0059f99a
    PUSH EDI                            ; 0059f99b
        ;   Label: LAB_0059f99b
    PUSH EBX                            ; 0059f99c
    FLD float ptr [ESI + 0x113c4]       ; 0059f99d
    FMUL double ptr [0x005ef9c7]        ; 0059f9a3 | DAT_005ef9c7
    CALL crt_math.c_round_FUN_005b7ff0  ; 0059f9a9
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x8]         ; 0059f9ae
    MOV ECX,dword ptr [ESP + 0x8]       ; 0059f9b2
    PUSH ECX                            ; 0059f9b6
    MOV EBX,dword ptr [0x0060b280]      ; 0059f9b7 | DAT_0060b280
    PUSH EBX                            ; 0059f9bd | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 0059f9be
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0059f9c3
    LEA EDX,[ESI + 0x2d0c]              ; 0059f9c6
    MOV EAX,dword ptr [ESI + 0x113c4]   ; 0059f9cc
    MOV EBX,EDX                         ; 0059f9d2
    MOV dword ptr [ESP + 0xc],EAX       ; 0059f9d4
    MOV EDI,dword ptr [EDX]             ; 0059f9d8
    XOR EAX,EAX                         ; 0059f9da
    TEST EDI,EDI                        ; 0059f9dc
    JLE 0x0059fa00                      ; 0059f9de
        ;   XREF to: 0059fa00 (CONDITIONAL_JUMP)  ; LAB_0059fa00
    MOV EDI,dword ptr [ESP + 0xc]       ; 0059f9e0
    MOV ECX,dword ptr [EDX + 0x194]     ; 0059f9e4
        ;   Label: LAB_0059f9e4
    MOV dword ptr [ECX + 0x37b48],EDI   ; 0059f9ea
    INC EAX                             ; 0059f9f0
    MOV EBP,dword ptr [EBX]             ; 0059f9f1
    ADD EDX,0x4                         ; 0059f9f3
    CMP EAX,EBP                         ; 0059f9f6
    JL 0x0059f9e4                       ; 0059f9f8
        ;   XREF to: 0059f9e4 (CONDITIONAL_JUMP)  ; LAB_0059f9e4
    LEA EAX,[EAX]                       ; 0059f9fa
    PUSH ESI                            ; 0059fa00
        ;   Label: LAB_0059fa00
    CALL core_charactr.cpp_FUN_004268b0 ; 0059fa01
        ;   XREF to: 004268b0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004268b0()
    ADD ESP,0x4                         ; 0059fa06
    POP EBX                             ; 0059fa09
    POP EDI                             ; 0059fa0a
    ADD ESP,0x8                         ; 0059fa0b
    POP EBP                             ; 0059fa0e
    POP ESI                             ; 0059fa0f
    RET                                 ; 0059fa10

