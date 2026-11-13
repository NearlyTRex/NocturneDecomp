; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint engine_font_cpp_FUN_004c4ba0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4e9d4
;   undefined4 DAT_01c4e9e0
;   undefined4 DAT_01c4e9ec
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c4ba0
        ;   Label: engine_font.cpp_FUN_004c4ba0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004c4ba4
    CMP dword ptr [0x0061b4a0],0x20     ; 004c4ba8 | DAT_0061b4a0
    JNZ 0x004c4bd6                      ; 004c4baf
        ;   XREF to: 004c4bd6 (CONDITIONAL_JUMP)  ; LAB_004c4bd6
    MOV CL,byte ptr [0x01c4e9d4]        ; 004c4bb1 | DAT_01c4e9d4
    SHL EAX,CL                          ; 004c4bb7
    MOV CL,byte ptr [0x01c4e9e0]        ; 004c4bb9 | DAT_01c4e9e0
    SHL EDX,CL                          ; 004c4bbf
    MOV CL,byte ptr [0x01c4e9ec]        ; 004c4bc1 | DAT_01c4e9ec
    OR EAX,EDX                          ; 004c4bc7
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c4bc9
    SHL EDX,CL                          ; 004c4bcd
    MOV ECX,EDX                         ; 004c4bcf
    OR ECX,EAX                          ; 004c4bd1
    MOV EAX,ECX                         ; 004c4bd3
    RET                                 ; 004c4bd5
    PUSH EBX                            ; 004c4bd6
        ;   Label: LAB_004c4bd6
    MOV ECX,EAX                         ; 004c4bd7
    MOV EAX,EDX                         ; 004c4bd9
    SHL ECX,0x10                        ; 004c4bdb
    SHL EAX,0x8                         ; 004c4bde
    MOV EBX,dword ptr [ESP + 0x10]      ; 004c4be1
    OR ECX,EAX                          ; 004c4be5
    OR ECX,EBX                          ; 004c4be7
    POP EBX                             ; 004c4be9
    MOV EAX,ECX                         ; 004c4bea
    RET                                 ; 004c4bec

