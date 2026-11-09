; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBulletHole * __cdecl core_fire_cpp_FUN_004a1420(void)
;
;
; XREF[1]:
;   core_fire.cpp_FUN_004a2090 at 004a2241
;
; Referenced Globals:
;   undefined4 DAT_01c8aea0
;   undefined4 DAT_01c8aea4
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01c8aea4]      ; 004a1420 | DAT_01c8aea4
        ;   Label: core_fire.cpp_FUN_004a1420
    MOV ECX,dword ptr [0x01c8aea0]      ; 004a1426 | DAT_01c8aea0
    MOV EAX,EDX                         ; 004a142c
    SHL EAX,0x6                         ; 004a142e
    INC EDX                             ; 004a1431
    ADD EAX,0x1c8aea8                   ; 004a1432
    CMP EDX,0x100                       ; 004a1437
    JL 0x004a1441                       ; 004a143d
        ;   XREF to: 004a1441 (CONDITIONAL_JUMP)  ; LAB_004a1441
    XOR EDX,EDX                         ; 004a143f
    INC ECX                             ; 004a1441
        ;   Label: LAB_004a1441
    CMP ECX,0x100                       ; 004a1442
    JLE 0x004a144f                      ; 004a1448
        ;   XREF to: 004a144f (CONDITIONAL_JUMP)  ; LAB_004a144f
    MOV ECX,0x100                       ; 004a144a
    MOV dword ptr [0x01c8aea0],ECX      ; 004a144f | DAT_01c8aea0
        ;   Label: LAB_004a144f
    MOV dword ptr [0x01c8aea4],EDX      ; 004a1455 | DAT_01c8aea4
    RET                                 ; 004a145b

