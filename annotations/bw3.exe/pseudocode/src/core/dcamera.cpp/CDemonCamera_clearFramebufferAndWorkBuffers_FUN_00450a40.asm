; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00450a40(CDemonCamera *this_ptr,int clear_color)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   clear_color
;
; XREF[1]:
;   core_game.cpp_FUN_004bb100 at 004bcab5
;
; Referenced Globals:
;   undefined4 DAT_0135ec10
;   undefined4 DAT_01371810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00450a40
        ;   Label: core_dcamera.cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_00450a40
    PUSH ESI                            ; 00450a41
    PUSH EDI                            ; 00450a42
    PUSH EBP                            ; 00450a43
    MOV EDX,dword ptr [ESP + 0x14]      ; 00450a44
    MOV EDI,dword ptr [ESP + 0x18]      ; 00450a48
    MOV ECX,dword ptr [EDX + 0x148]     ; 00450a4c
    XOR ESI,ESI                         ; 00450a52
    TEST ECX,ECX                        ; 00450a54
    JLE 0x00450a8a                      ; 00450a56
        ;   XREF to: 00450a8a (CONDITIONAL_JUMP)  ; LAB_00450a8a
    MOV EBP,dword ptr [EDX + 0x144]     ; 00450a58
        ;   Label: LAB_00450a58
    XOR EAX,EAX                         ; 00450a5e
    TEST EBP,EBP                        ; 00450a60
    JLE 0x00450a81                      ; 00450a62
        ;   XREF to: 00450a81 (CONDITIONAL_JUMP)  ; LAB_00450a81
    MOV ECX,dword ptr [EDX + 0x144]     ; 00450a64
        ;   Label: LAB_00450a64
    IMUL ECX,ESI                        ; 00450a6a
    MOV EBX,dword ptr [EDX + 0x158]     ; 00450a6d
    ADD ECX,EAX                         ; 00450a73
    MOV dword ptr [EBX + ECX*0x4],EDI   ; 00450a75
    INC EAX                             ; 00450a78
    CMP EAX,dword ptr [EDX + 0x144]     ; 00450a79
    JL 0x00450a64                       ; 00450a7f
        ;   XREF to: 00450a64 (CONDITIONAL_JUMP)  ; LAB_00450a64
    INC ESI                             ; 00450a81
        ;   Label: LAB_00450a81
    CMP ESI,dword ptr [EDX + 0x148]     ; 00450a82
    JL 0x00450a58                       ; 00450a88
        ;   XREF to: 00450a58 (CONDITIONAL_JUMP)  ; LAB_00450a58
    MOV ESI,0x140                       ; 00450a8a
        ;   Label: LAB_00450a8a
    XOR ECX,ECX                         ; 00450a8f
    MOV EDX,ESI                         ; 00450a91
        ;   Label: LAB_00450a91
    XOR BL,BL                           ; 00450a93
    IMUL EAX,ECX,0x140                  ; 00450a95
    INC EAX                             ; 00450a9b
        ;   Label: LAB_00450a9b
    MOV byte ptr [EAX + 0x13716cf],BL   ; 00450a9c | DAT_01371810
    MOV byte ptr [EAX + 0x135eacf],BL   ; 00450aa2 | DAT_0135ec10
    CMP EAX,EDX                         ; 00450aa8
    JNZ 0x00450a9b                      ; 00450aaa
        ;   XREF to: 00450a9b (CONDITIONAL_JUMP)  ; LAB_00450a9b
    INC ECX                             ; 00450aac
    ADD ESI,0x140                       ; 00450aad
    CMP ECX,0xf0                        ; 00450ab3
    JL 0x00450a91                       ; 00450ab9
        ;   XREF to: 00450a91 (CONDITIONAL_JUMP)  ; LAB_00450a91
    POP EBP                             ; 00450abb
    POP EDI                             ; 00450abc
    POP ESI                             ; 00450abd
    POP EBX                             ; 00450abe
    RET                                 ; 00450abf

