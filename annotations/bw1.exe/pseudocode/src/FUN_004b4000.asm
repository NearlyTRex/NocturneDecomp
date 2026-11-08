; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b4000(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   FUN_004b7270 at 004b729f
;
; Called Functions:
;   FUN_0040cc00
;   FUN_00532160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b4000
        ;   Label: FUN_004b4000
    PUSH ESI                            ; 004b4001
    SUB ESP,0x4                         ; 004b4002
    MOV EBX,dword ptr [ESP + 0x10]      ; 004b4005
    MOV ESI,dword ptr [ESP + 0x18]      ; 004b4009
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004b400d
    PUSH EDX                            ; 004b4011
    MOV ECX,dword ptr [ESP + 0x18]      ; 004b4012
    PUSH ECX                            ; 004b4016
    PUSH EBX                            ; 004b4017
    CALL FUN_00532160                   ; 004b4018
        ;   XREF to: 00532160 (UNCONDITIONAL_CALL)  ; undefined FUN_00532160()
    LEA EAX,[EBX + 0x40]                ; 004b401d
    ADD ESP,0xc                         ; 004b4020
    CMP EAX,ESI                         ; 004b4023
    JZ 0x004b4037                       ; 004b4025
        ;   XREF to: 004b4037 (CONDITIONAL_JUMP)  ; LAB_004b4037
    MOV EDX,dword ptr [ESI]             ; 004b4027
    MOV dword ptr [EAX],EDX             ; 004b4029
    MOV EDX,dword ptr [ESI + 0x4]       ; 004b402b
    MOV dword ptr [EAX + 0x4],EDX       ; 004b402e
    MOV EDX,dword ptr [ESI + 0x8]       ; 004b4031
    MOV dword ptr [EAX + 0x8],EDX       ; 004b4034
    PUSH 0x40c90fdb                     ; 004b4037
        ;   Label: LAB_004b4037
    MOV EAX,dword ptr [ESP + 0x24]      ; 004b403c
    PUSH 0xc0c90fdb                     ; 004b4040
    MOV dword ptr [EBX + 0x5c],EAX      ; 004b4045
    CALL FUN_0040cc00                   ; 004b4048
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x8],EAX       ; 004b404d
    FLD float ptr [ESP + 0x8]           ; 004b4051
    ADD ESP,0x8                         ; 004b4055
    PUSH 0x40490fdb                     ; 004b4058
    PUSH 0xc0490fdb                     ; 004b405d
    FSTP float ptr [EBX + 0x4c]         ; 004b4062
    CALL FUN_0040cc00                   ; 004b4065
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [EBX + 0x58],0x0      ; 004b406a
    MOV dword ptr [ESP + 0x8],EAX       ; 004b4071
    MOV dword ptr [EBX + 0x24],0x40400000 ; 004b4075
    MOV EAX,dword ptr [ESP + 0x8]       ; 004b407c
    MOV dword ptr [EBX + 0x50],EAX      ; 004b4080
    ADD ESP,0x8                         ; 004b4083
    ADD ESP,0x4                         ; 004b4086
    POP ESI                             ; 004b4089
    POP EBX                             ; 004b408a
    RET                                 ; 004b408b

