; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_zombie_cpp_FUN_005cd144(int param_1)
;
;
; XREF[5]:
;   unkafter_2d.cpp_FUN_005cd2b8 at 005cd2bb
;   unkafter_2d.cpp_FUN_005cd2f8 at 005cd356
;   unkafter_2d.cpp_FUN_005cd3b8 at 005cd3bf
;   unkafter_zombie.cpp_FUN_005cd1b0 at 005cd1c2
;   unkafter_zombie.cpp_FUN_005cd210 at 005cd213
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

    PUSH EBX                            ; 005cd144
        ;   Label: unkafter_zombie.cpp_FUN_005cd144
    MOV EBX,dword ptr [ESP + 0x8]       ; 005cd145
    CMP EBX,0x7                         ; 005cd149
    JZ 0x005cd153                       ; 005cd14c
        ;   XREF to: 005cd153 (CONDITIONAL_JUMP)  ; LAB_005cd153
    CMP EBX,0x4                         ; 005cd14e
    JNZ 0x005cd15c                      ; 005cd151
        ;   XREF to: 005cd15c (CONDITIONAL_JUMP)  ; LAB_005cd15c
    MOV EAX,dword ptr [EBX*0x8 + 0x626ae4] ; 005cd153 | DAT_00626ae4
        ;   Label: LAB_005cd153
    POP EBX                             ; 005cd15a
    RET                                 ; 005cd15b
    CALL dword ptr [0x006265fc]         ; 005cd15c | PTR_crt_unknown.c_FUN_005c50cc_006265fc
        ;   Label: LAB_005cd15c
    MOV EAX,dword ptr [EAX + EBX*0x8 + 0x58] ; 005cd162
    POP EBX                             ; 005cd166
    RET                                 ; 005cd167

