; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00484a80(int param_1,int param_2,undefined4 param_3)
;
; Local Variables:
; undefined2       Stack[-0x18]:2  local_18
; undefined2       Stack[-0x16]:2  local_16
; undefined2       Stack[-0x14]:2  local_14
; undefined2       Stack[-0x12]:2  local_12
; undefined2       Stack[-0x10]:2  local_10
; undefined2       Stack[-0xe]:2  local_e
; undefined2       Stack[-0xc]:2  local_c
; undefined2       Stack[-0xa]:2  local_a
; undefined2       Stack[-0x8]:2  local_8
;
; XREF[1]:
;   FUN_004841a0 at 004841d2
;
; Called Functions:
;   FUN_00403920
;   FUN_00484c20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00484a80
        ;   Label: FUN_00484a80
    SUB ESP,0x14                        ; 00484a81
    MOV EBX,dword ptr [ESP + 0x20]      ; 00484a84
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00484a88
    CMP dword ptr [EAX + 0xc],0x0       ; 00484a8c
    JZ 0x00484aa7                       ; 00484a90
        ;   XREF to: 00484aa7 (CONDITIONAL_JUMP)  ; LAB_00484aa7
    LEA EAX,[EBX + 0x8]                 ; 00484a92
    PUSH EAX                            ; 00484a95
    CALL FUN_00403920                   ; 00484a96
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined FUN_00403920()
    ADD ESP,0x4                         ; 00484a9b
    TEST EAX,EAX                        ; 00484a9e
    JNZ 0x00484aa7                      ; 00484aa0
        ;   XREF to: 00484aa7 (CONDITIONAL_JUMP)  ; LAB_00484aa7
    ADD ESP,0x14                        ; 00484aa2
    POP EBX                             ; 00484aa5
    RET                                 ; 00484aa6
    MOV AX,word ptr [EBX + 0x18]        ; 00484aa7
        ;   Label: LAB_00484aa7
    MOV word ptr [ESP],AX               ; 00484aab
    MOV AX,word ptr [EBX + 0x24]        ; 00484aaf
    MOV word ptr [ESP + 0x2],AX         ; 00484ab3
    MOV AX,word ptr [EBX + 0x30]        ; 00484ab8
    MOV word ptr [ESP + 0x4],AX         ; 00484abc
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00484ac1
    SAR EAX,0x8                         ; 00484ac4
    MOV word ptr [ESP + 0x6],AX         ; 00484ac7
    MOV EAX,dword ptr [EBX + 0x28]      ; 00484acc
    SAR EAX,0x8                         ; 00484acf
    MOV word ptr [ESP + 0x8],AX         ; 00484ad2
    MOV EAX,dword ptr [EBX + 0x34]      ; 00484ad7
    SAR EAX,0x8                         ; 00484ada
    MOV word ptr [ESP + 0xa],AX         ; 00484add
    MOV EAX,dword ptr [EBX + 0x20]      ; 00484ae2
    SAR EAX,0x8                         ; 00484ae5
    MOV word ptr [ESP + 0xc],AX         ; 00484ae8
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00484aed
    SAR EAX,0x8                         ; 00484af0
    MOV word ptr [ESP + 0xe],AX         ; 00484af3
    MOV EAX,dword ptr [EBX + 0x38]      ; 00484af8
    MOV ECX,dword ptr [ESP + 0x24]      ; 00484afb
    SAR EAX,0x8                         ; 00484aff
    PUSH ECX                            ; 00484b02
    MOV word ptr [ESP + 0x14],AX        ; 00484b03
    LEA EAX,[ESP + 0x4]                 ; 00484b08
    PUSH EAX                            ; 00484b0c
    MOV EBX,dword ptr [ESP + 0x24]      ; 00484b0d
    PUSH EBX                            ; 00484b11
    CALL FUN_00484c20                   ; 00484b12
        ;   XREF to: 00484c20 (UNCONDITIONAL_CALL)  ; undefined FUN_00484c20()
    ADD ESP,0xc                         ; 00484b17
    ADD ESP,0x14                        ; 00484b1a
    POP EBX                             ; 00484b1d
    RET                                 ; 00484b1e

