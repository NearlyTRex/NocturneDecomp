; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040f840(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_wp_nomana_wav_005b632d
;   TerminatedCString s_wp_bindevil_throw_wav_005b633b
;   undefined4 DAT_005fc5a0
;   undefined4 DAT_006045f8
;
; Called Functions:
;   FUN_004a39a0
;   FUN_005609d0
;   FUN_0057b880
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0040f840
        ;   Label: FUN_0040f840
    PUSH EDI                            ; 0040f841
    MOV ESI,dword ptr [ESP + 0xc]       ; 0040f842
    PUSH ESI                            ; 0040f846
    CALL FUN_0057b880                   ; 0040f847
        ;   XREF to: 0057b880 (UNCONDITIONAL_CALL)  ; undefined FUN_0057b880()
    ADD ESP,0x4                         ; 0040f84c
    LEA EDI,[ESI + 0x20]                ; 0040f84f
    TEST EAX,EAX                        ; 0040f852
    JZ 0x0040f8ad                       ; 0040f854
        ;   XREF to: 0040f8ad (CONDITIONAL_JUMP)  ; LAB_0040f8ad
    PUSH EBX                            ; 0040f856
    LEA EBX,[ESI + 0x594]               ; 0040f857
    PUSH EBX                            ; 0040f85d
    LEA EAX,[ESI + 0x30]                ; 0040f85e
    PUSH EAX                            ; 0040f861
    PUSH EDI                            ; 0040f862
    MOV ECX,dword ptr [0x005fc5a0]      ; 0040f863 | DAT_005fc5a0
    PUSH ECX                            ; 0040f869
    CALL FUN_004a39a0                   ; 0040f86a
        ;   XREF to: 004a39a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a39a0()
    ADD ESP,0x10                        ; 0040f86f
    PUSH EDI                            ; 0040f872
    PUSH 0x5b633b                       ; 0040f873 | = "wp_bindevil_throw.wav"
    PUSH ESI                            ; 0040f878
    MOV EDI,dword ptr [0x006045f8]      ; 0040f879 | DAT_006045f8
    PUSH EDI                            ; 0040f87f
    CALL FUN_005609d0                   ; 0040f880
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005609d0()
    MOV EAX,0x1                         ; 0040f885
    MOV dword ptr [EBX + 0x8],0x0       ; 0040f88a
    ADD ESP,0x10                        ; 0040f891
    MOV EDX,dword ptr [EBX + 0x8]       ; 0040f894
    MOV dword ptr [EBX + 0x4],EDX       ; 0040f897
    MOV EDX,dword ptr [EBX + 0x4]       ; 0040f89a
    MOV dword ptr [EBX],EDX             ; 0040f89d
    MOV dword ptr [ESI + 0x300],0x40400000 ; 0040f89f
    POP EBX                             ; 0040f8a9
    POP EDI                             ; 0040f8aa
    POP ESI                             ; 0040f8ab
    RET                                 ; 0040f8ac
    PUSH EDI                            ; 0040f8ad
        ;   Label: LAB_0040f8ad
    PUSH 0x5b632d                       ; 0040f8ae | = "wp_nomana.wav"
    PUSH ESI                            ; 0040f8b3
    MOV EDX,dword ptr [0x006045f8]      ; 0040f8b4 | DAT_006045f8
    PUSH EDX                            ; 0040f8ba
    CALL FUN_005609d0                   ; 0040f8bb
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005609d0()
    ADD ESP,0x10                        ; 0040f8c0
    XOR EAX,EAX                         ; 0040f8c3
    POP EDI                             ; 0040f8c5
    POP ESI                             ; 0040f8c6
    RET                                 ; 0040f8c7

