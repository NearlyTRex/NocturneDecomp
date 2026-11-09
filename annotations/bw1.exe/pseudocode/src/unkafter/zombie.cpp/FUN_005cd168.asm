; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_zombie_cpp_FUN_005cd168(int param_1)
;
;
; XREF[1]:
;   unkafter_2d.cpp_FUN_005cd2f8 at 005cd335
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005c50cc_006265fc = 005c50cc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cd168
        ;   Label: unkafter_zombie.cpp_FUN_005cd168
    MOV EBX,dword ptr [ESP + 0x8]       ; 005cd169
    CMP EBX,0x7                         ; 005cd16d
    JZ 0x005cd177                       ; 005cd170
        ;   XREF to: 005cd177 (CONDITIONAL_JUMP)  ; LAB_005cd177
    CMP EBX,0x4                         ; 005cd172
    JNZ 0x005cd180                      ; 005cd175
        ;   XREF to: 005cd180 (CONDITIONAL_JUMP)  ; LAB_005cd180
    MOV EAX,dword ptr [EBX*0x8 + 0x626ae8] ; 005cd177
        ;   Label: LAB_005cd177
    POP EBX                             ; 005cd17e
    RET                                 ; 005cd17f
    CALL dword ptr [0x006265fc]         ; 005cd180 | PTR_crt_unknown.c_FUN_005c50cc_006265fc
        ;   Label: LAB_005cd180
    MOV EAX,dword ptr [EAX + EBX*0x8 + 0x5c] ; 005cd186
    POP EBX                             ; 005cd18a
    RET                                 ; 005cd18b

