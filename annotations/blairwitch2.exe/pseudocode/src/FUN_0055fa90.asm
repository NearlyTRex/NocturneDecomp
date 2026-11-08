; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0055fa90(int param_1,undefined4 *param_2,int param_3,undefined4 param_4)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0046bff0 at 0046c275
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_01e61b58
;   undefined4 DAT_0264bbf8
;   undefined4 DAT_0264bc00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055fa90
        ;   Label: FUN_0055fa90
    PUSH ESI                            ; 0055fa91
    PUSH EDI                            ; 0055fa92
    PUSH EBP                            ; 0055fa93
    SUB ESP,0xc                         ; 0055fa94
    MOV EDI,dword ptr [ESP + 0x20]      ; 0055fa97
    MOV EDX,dword ptr [ESP + 0x24]      ; 0055fa9b
    CMP dword ptr [0x01c37788],0x0      ; 0055fa9f | DAT_01c37788
    JZ 0x0055fb9f                       ; 0055faa6
        ;   XREF to: 0055fb9f (CONDITIONAL_JUMP)  ; LAB_0055fb9f
    MOV EBX,dword ptr [ESP + 0x28]      ; 0055faac
    MOV EAX,[0x01e61b58]                ; 0055fab0 | DAT_01e61b58
    MOV ESI,dword ptr [0x0264bc00]      ; 0055fab5 | DAT_0264bc00
    ADD EAX,EBX                         ; 0055fabb
    TEST ESI,ESI                        ; 0055fabd
    JNZ 0x0055fbab                      ; 0055fabf
        ;   XREF to: 0055fbab (CONDITIONAL_JUMP)  ; LAB_0055fbab
    MOV [0x01e61b58],EAX                ; 0055fac5 | DAT_01e61b58
    TEST EBX,EBX                        ; 0055faca
    JLE 0x0055fb90                      ; 0055facc
        ;   XREF to: 0055fb90 (CONDITIONAL_JUMP)  ; LAB_0055fb90
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0055fad2
    MOV EBX,EDX                         ; 0055fad6
    MOV EAX,dword ptr [EBX]             ; 0055fad8
        ;   Label: LAB_0055fad8
    XOR EDX,EDX                         ; 0055fada
    MOV DX,word ptr [EAX]               ; 0055fadc
    IMUL EDX,EDX,0x30                   ; 0055fadf
    LEA ECX,[EDI + EDX*0x1]             ; 0055fae2
    MOV dword ptr [ESP],ECX             ; 0055fae5
    XOR EDX,EDX                         ; 0055fae8
    MOV DX,word ptr [EAX + 0x2]         ; 0055faea
    IMUL EDX,EDX,0x30                   ; 0055faee
    LEA ECX,[EDI + EDX*0x1]             ; 0055faf1
    MOV dword ptr [ESP + 0x4],ECX       ; 0055faf4
    XOR EDX,EDX                         ; 0055faf8
    MOV DX,word ptr [EAX + 0x4]         ; 0055fafa
    IMUL EDX,EDX,0x30                   ; 0055fafe
    LEA ECX,[EDI + EDX*0x1]             ; 0055fb01
    MOV dword ptr [ESP + 0x8],ECX       ; 0055fb04
    XOR ECX,ECX                         ; 0055fb08
    MOV CX,word ptr [EAX + 0x6]         ; 0055fb0a
    MOV EDX,dword ptr [ESP]             ; 0055fb0e
    SHL ECX,0x8                         ; 0055fb11
    MOV dword ptr [EDX + 0x18],ECX      ; 0055fb14
    XOR ECX,ECX                         ; 0055fb17
    MOV CX,word ptr [EAX + 0xc]         ; 0055fb19
    MOV EDX,dword ptr [ESP]             ; 0055fb1d
    SHL ECX,0x8                         ; 0055fb20
    MOV dword ptr [EDX + 0x1c],ECX      ; 0055fb23
    XOR ECX,ECX                         ; 0055fb26
    MOV CX,word ptr [EAX + 0x8]         ; 0055fb28
    MOV EDX,dword ptr [ESP + 0x4]       ; 0055fb2c
    SHL ECX,0x8                         ; 0055fb30
    MOV dword ptr [EDX + 0x18],ECX      ; 0055fb33
    XOR ECX,ECX                         ; 0055fb36
    MOV CX,word ptr [EAX + 0xe]         ; 0055fb38
    MOV EDX,dword ptr [ESP + 0x4]       ; 0055fb3c
    SHL ECX,0x8                         ; 0055fb40
    MOV dword ptr [EDX + 0x1c],ECX      ; 0055fb43
    XOR ECX,ECX                         ; 0055fb46
    MOV CX,word ptr [EAX + 0xa]         ; 0055fb48
    MOV EDX,dword ptr [ESP + 0x8]       ; 0055fb4c
    SHL ECX,0x8                         ; 0055fb50
    MOV dword ptr [EDX + 0x18],ECX      ; 0055fb53
    MOV AX,word ptr [EAX + 0x10]        ; 0055fb56
    MOV EDX,dword ptr [ESP + 0x8]       ; 0055fb5a
    AND EAX,0xffff                      ; 0055fb5e
    PUSH EBP                            ; 0055fb63
    SHL EAX,0x8                         ; 0055fb64
    PUSH 0x3                            ; 0055fb67
    MOV dword ptr [EDX + 0x1c],EAX      ; 0055fb69
    LEA EAX,[ESP + 0x8]                 ; 0055fb6c
    PUSH EAX                            ; 0055fb70
    CALL dword ptr [0x0264bbf8]         ; 0055fb71 | DAT_0264bbf8
    ADD ESP,0xc                         ; 0055fb77
    INC ESI                             ; 0055fb7a
    MOV EAX,dword ptr [ESP + 0x28]      ; 0055fb7b
    ADD EBX,0x4                         ; 0055fb7f
    CMP ESI,EAX                         ; 0055fb82
    JL 0x0055fad8                       ; 0055fb84
        ;   XREF to: 0055fad8 (CONDITIONAL_JUMP)  ; LAB_0055fad8
    LEA EAX,[EAX]                       ; 0055fb8a
    MOV EDX,0x1                         ; 0055fb90
        ;   Label: LAB_0055fb90
    MOV EAX,EDX                         ; 0055fb95
    ADD ESP,0xc                         ; 0055fb97
    POP EBP                             ; 0055fb9a
    POP EDI                             ; 0055fb9b
    POP ESI                             ; 0055fb9c
    POP EBX                             ; 0055fb9d
    RET                                 ; 0055fb9e
    XOR EDX,EDX                         ; 0055fb9f
        ;   Label: LAB_0055fb9f
    MOV EAX,EDX                         ; 0055fba1
    ADD ESP,0xc                         ; 0055fba3
    POP EBP                             ; 0055fba6
    POP EDI                             ; 0055fba7
    POP ESI                             ; 0055fba8
    POP EBX                             ; 0055fba9
    RET                                 ; 0055fbaa
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0055fbab
        ;   Label: LAB_0055fbab
    PUSH EBP                            ; 0055fbaf
    PUSH EBX                            ; 0055fbb0
    PUSH EDX                            ; 0055fbb1
    PUSH EDI                            ; 0055fbb2
    MOV [0x01e61b58],EAX                ; 0055fbb3 | DAT_01e61b58
    CALL dword ptr [0x0264bc00]         ; 0055fbb8 | DAT_0264bc00
    ADD ESP,0x10                        ; 0055fbbe
    MOV EDX,EAX                         ; 0055fbc1
    MOV EAX,EDX                         ; 0055fbc3
    ADD ESP,0xc                         ; 0055fbc5
    POP EBP                             ; 0055fbc8
    POP EDI                             ; 0055fbc9
    POP ESI                             ; 0055fbca
    POP EBX                             ; 0055fbcb
    RET                                 ; 0055fbcc

