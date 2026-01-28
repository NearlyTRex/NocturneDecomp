; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined4 crt_unknown_c_FUN_0060d48c(void)
;
; Local Variables:
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined1[10]   Stack[-0x24]:10  local_24
; undefined8       Stack[-0x18]:8  local_18
; undefined        Stack[-0x10]:1  local_10
;
; XREF[2]:
;   crt_unknown.c_FUN_0060b106 at 0060b128
;   crt_unknown.c_FUN_0060b142 at 0060b164
;
; Called Functions:
;   crt_unknown.c_FUN_00603dc8
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0060d48c
        ;   Label: crt_unknown.c_FUN_0060d48c
    MOV EBP,ESP                         ; 0060d48d
    PUSH EBX                            ; 0060d48f
    PUSH ESI                            ; 0060d490
    PUSH EDI                            ; 0060d491
    SUB ESP,0x40                        ; 0060d492
    MOV EAX,dword ptr [EBP + 0x8]       ; 0060d495
    MOV dword ptr [EBP + -0x14],EAX     ; 0060d498
    MOV EAX,dword ptr [EBP + 0xc]       ; 0060d49b
    LEA EDX,[EBP + -0x20]               ; 0060d49e
    MOV dword ptr [EBP + -0x10],EAX     ; 0060d4a1
    LEA EAX,[EBP + -0x14]               ; 0060d4a4
    FLD double ptr [EAX]                ; 0060d4a7
    FSTP extended double ptr [EDX]      ; 0060d4a9
    CMP dword ptr [EBP + 0x1c],0x46     ; 0060d4ab
    JNZ 0x0060d4c0                      ; 0060d4af
        ;   XREF to: 0060d4c0 (CONDITIONAL_JUMP)  ; LAB_0060d4c0
    MOV ESI,0xa                         ; 0060d4b1
    XOR EDI,EDI                         ; 0060d4b6
    MOV dword ptr [EBP + -0x44],ESI     ; 0060d4b8
    MOV dword ptr [EBP + -0x48],EDI     ; 0060d4bb
    JMP 0x0060d4d0                      ; 0060d4be
        ;   XREF to: 0060d4d0 (UNCONDITIONAL_JUMP)  ; LAB_0060d4d0
    MOV EBX,0xc                         ; 0060d4c0
        ;   Label: LAB_0060d4c0
    MOV ECX,0x1                         ; 0060d4c5
    MOV dword ptr [EBP + -0x44],EBX     ; 0060d4ca
    MOV dword ptr [EBP + -0x48],ECX     ; 0060d4cd
    MOV EAX,dword ptr [EBP + 0x10]      ; 0060d4d0
        ;   Label: LAB_0060d4d0
    MOV dword ptr [EBP + -0x4c],EAX     ; 0060d4d3
    XOR EAX,EAX                         ; 0060d4d6
    MOV EDX,dword ptr [EBP + 0x20]      ; 0060d4d8
    MOV dword ptr [EBP + -0x3c],EAX     ; 0060d4db
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0060d4de
    PUSH EDX                            ; 0060d4e1
    MOV dword ptr [EBP + -0x40],EAX     ; 0060d4e2
    LEA EAX,[EBP + -0x4c]               ; 0060d4e5
    PUSH EAX                            ; 0060d4e8
    LEA EAX,[EBP + -0x20]               ; 0060d4e9
    PUSH EAX                            ; 0060d4ec
    CALL crt_unknown.c_FUN_00603dc8     ; 0060d4ed
        ;   XREF to: 00603dc8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00603dc8()
    MOV EDX,dword ptr [EBP + 0x14]      ; 0060d4f2
    MOV EAX,dword ptr [EBP + -0x34]     ; 0060d4f5
    MOV dword ptr [EDX],EAX             ; 0060d4f8
    MOV EDX,dword ptr [EBP + 0x18]      ; 0060d4fa
    MOV EAX,dword ptr [EBP + -0x38]     ; 0060d4fd
    ADD ESP,0xc                         ; 0060d500
    MOV dword ptr [EDX],EAX             ; 0060d503
    MOV EAX,dword ptr [EBP + 0x20]      ; 0060d505
    LEA ESP,[EBP + -0xc]                ; 0060d508
    POP EDI                             ; 0060d50b
    POP ESI                             ; 0060d50c
    POP EBX                             ; 0060d50d
    POP EBP                             ; 0060d50e
    RET                                 ; 0060d50f

