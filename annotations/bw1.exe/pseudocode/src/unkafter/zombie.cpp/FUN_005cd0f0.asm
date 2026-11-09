; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_zombie_cpp_FUN_005cd0f0(int param_1,undefined4 param_2)
;
;
; XREF[4]:
;   unkafter_2d.cpp_FUN_005cd2b8 at 005cd2d8
;   unkafter_2d.cpp_FUN_005cd2f8 at 005cd362
;   unkafter_2d.cpp_FUN_005cd3b8 at 005cd407
;   unkafter_2d.cpp_FUN_005cd47c at 005cd48e
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005c50cc_006265fc = 005c50cc
;   undefined4 DAT_00626ae4
;
; Called Functions:
;   crt_unknown.c_FUN_005c50cc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cd0f0
        ;   Label: unkafter_zombie.cpp_FUN_005cd0f0
    PUSH ESI                            ; 005cd0f1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005cd0f2
    CMP EBX,0x7                         ; 005cd0f6
    JZ 0x005cd100                       ; 005cd0f9
        ;   XREF to: 005cd100 (CONDITIONAL_JUMP)  ; LAB_005cd100
    CMP EBX,0x4                         ; 005cd0fb
    JNZ 0x005cd11c                      ; 005cd0fe
        ;   XREF to: 005cd11c (CONDITIONAL_JUMP)  ; LAB_005cd11c
    LEA EAX,[EBX*0x8 + 0x0]             ; 005cd100
        ;   Label: LAB_005cd100
    MOV ESI,dword ptr [ESP + 0x10]      ; 005cd107
    MOV EBX,dword ptr [EAX + 0x626ae4]  ; 005cd10b | DAT_00626ae4
    MOV dword ptr [EAX + 0x626ae4],ESI  ; 005cd111 | DAT_00626ae4
    MOV EAX,EBX                         ; 005cd117
    POP ESI                             ; 005cd119
    POP EBX                             ; 005cd11a
    RET                                 ; 005cd11b
    LEA ESI,[EBX*0x8 + 0x0]             ; 005cd11c
        ;   Label: LAB_005cd11c
    CALL dword ptr [0x006265fc]         ; 005cd123 | PTR_crt_unknown.c_FUN_005c50cc_006265fc
    MOV EBX,dword ptr [ESI + EAX*0x1 + 0x58] ; 005cd129
    CALL dword ptr [0x006265fc]         ; 005cd12d | PTR_crt_unknown.c_FUN_005c50cc_006265fc
    ADD EAX,ESI                         ; 005cd133
    MOV ESI,dword ptr [ESP + 0x10]      ; 005cd135
    MOV dword ptr [EAX + 0x58],ESI      ; 005cd139
    MOV EAX,EBX                         ; 005cd13c
    POP ESI                             ; 005cd13e
    POP EBX                             ; 005cd13f
    RET                                 ; 005cd140

