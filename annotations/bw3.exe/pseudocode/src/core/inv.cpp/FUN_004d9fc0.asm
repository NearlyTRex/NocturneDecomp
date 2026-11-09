; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_inv_cpp_FUN_004d9fc0(int param_1,char *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_006045f8
;
; Called Functions:
;   core_sound.cpp_CSound_playSound_FUN_005609b0
;   core_sound.cpp_FUN_00560af0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d9fc0
        ;   Label: core_inv.cpp_FUN_004d9fc0
    XOR EBX,EBX                         ; 004d9fc1
    MOV EDX,dword ptr [EBX + 0x1d70a24] ; 004d9fc3
        ;   Label: LAB_004d9fc3
    PUSH EDX                            ; 004d9fc9
    MOV ECX,dword ptr [0x006045f8]      ; 004d9fca | DAT_006045f8
    PUSH ECX                            ; 004d9fd0
    CALL core_sound.cpp_FUN_00560af0    ; 004d9fd1
        ;   XREF to: 00560af0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_FUN_00560af0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 004d9fd6
    TEST EAX,EAX                        ; 004d9fd9
    JZ 0x004d9fe9                       ; 004d9fdb
        ;   XREF to: 004d9fe9 (CONDITIONAL_JUMP)  ; LAB_004d9fe9
    ADD EBX,0x4                         ; 004d9fdd
    CMP EBX,0x10                        ; 004d9fe0
    JL 0x004d9fc3                       ; 004d9fe3
        ;   XREF to: 004d9fc3 (CONDITIONAL_JUMP)  ; LAB_004d9fc3
    XOR EAX,EAX                         ; 004d9fe5
    POP EBX                             ; 004d9fe7
    RET                                 ; 004d9fe8
    PUSH EDI                            ; 004d9fe9
        ;   Label: LAB_004d9fe9
    PUSH ESI                            ; 004d9fea
    MOV ESI,dword ptr [ESP + 0x14]      ; 004d9feb
    PUSH ESI                            ; 004d9fef
    PUSH EAX                            ; 004d9ff0
    MOV EDI,dword ptr [0x006045f8]      ; 004d9ff1 | DAT_006045f8
    PUSH EDI                            ; 004d9ff7
    CALL core_sound.cpp_CSound_playSound_FUN_005609b0 ; 004d9ff8
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005609b0(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004d9ffd
    MOV EDX,dword ptr [ESP + 0x10]      ; 004da000
    MOV dword ptr [EDX + 0x27ac],EAX    ; 004da004
    MOV dword ptr [EBX + 0x1d70a24],EAX ; 004da00a
    MOV EAX,0x1                         ; 004da010
    POP ESI                             ; 004da015
    POP EDI                             ; 004da016
    POP EBX                             ; 004da017
    RET                                 ; 004da018

