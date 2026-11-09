; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcamera_cpp_FUN_0044af70(int param_1,float *param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_00534890 at 005351fe
;
; Referenced Globals:
;   undefined4 DAT_005b9d6e
;   undefined4 DAT_005b9d76
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;   crt_memory.c_memset_FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044af70
        ;   Label: core_dcamera.cpp_FUN_0044af70
    PUSH ESI                            ; 0044af71
    PUSH EDI                            ; 0044af72
    PUSH EBP                            ; 0044af73
    MOV EBP,ESP                         ; 0044af74
    SUB ESP,0x14                        ; 0044af76
    AND ESP,0xfffffff8                  ; 0044af79
    MOV EDI,dword ptr [EBP + 0x14]      ; 0044af7c
    MOV ESI,dword ptr [EBP + 0x18]      ; 0044af7f
    PUSH 0x12d40                        ; 0044af82
    PUSH 0x0                            ; 0044af87
    PUSH 0xb1a288                       ; 0044af89
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0044af8e
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0044af93
    TEST ESI,ESI                        ; 0044af96
    JZ 0x0044b039                       ; 0044af98
        ;   XREF to: 0044b039 (CONDITIONAL_JUMP)  ; LAB_0044b039
    XOR EDX,EDX                         ; 0044af9e
    MOV ECX,dword ptr [EDI + 0x154]     ; 0044afa0
    MOV dword ptr [ESP + 0x8],EDX       ; 0044afa6
    TEST ECX,ECX                        ; 0044afaa
    JLE 0x0044b039                      ; 0044afac
        ;   XREF to: 0044b039 (CONDITIONAL_JUMP)  ; LAB_0044b039
    MOV dword ptr [ESP + 0x4],EDX       ; 0044afb2
    MOV dword ptr [ESP + 0xc],EDX       ; 0044afb6
    MOV ECX,0xb1a288                    ; 0044afba
        ;   Label: LAB_0044afba
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044afbf
    MOV EBX,dword ptr [ESP + 0x4]       ; 0044afc3
    ADD ECX,EDX                         ; 0044afc7
    MOV EDX,0xa38388                    ; 0044afc9
    MOV EAX,dword ptr [EDI + 0x150]     ; 0044afce
    ADD EDX,EBX                         ; 0044afd4
    XOR EBX,EBX                         ; 0044afd6
    TEST EAX,EAX                        ; 0044afd8
    JLE 0x0044b00b                      ; 0044afda
        ;   XREF to: 0044b00b (CONDITIONAL_JUMP)  ; LAB_0044b00b
    FLD float ptr [ESI + 0x4]           ; 0044afdc
        ;   Label: LAB_0044afdc
    FMUL float ptr [EDX + 0x4]          ; 0044afdf
    FLD float ptr [ESI]                 ; 0044afe2
    FMUL float ptr [EDX]                ; 0044afe4
    FADDP                               ; 0044afe6
    FLD float ptr [ESI + 0x8]           ; 0044afe8
    FMUL float ptr [EDX + 0x8]          ; 0044afeb
    FADDP                               ; 0044afee
    FST float ptr [ESP]                 ; 0044aff0
    FLDZ                                ; 0044aff3
    FCOMPP                              ; 0044aff5
    FNSTSW AX                           ; 0044aff7
    SAHF                                ; 0044aff9
    JC 0x0044b041                       ; 0044affa
        ;   XREF to: 0044b041 (CONDITIONAL_JUMP)  ; LAB_0044b041
    ADD EDX,0xc                         ; 0044affc
        ;   Label: LAB_0044affc
    INC EBX                             ; 0044afff
    MOV EAX,dword ptr [EDI + 0x150]     ; 0044b000
    INC ECX                             ; 0044b006
    CMP EBX,EAX                         ; 0044b007
    JL 0x0044afdc                       ; 0044b009
        ;   XREF to: 0044afdc (CONDITIONAL_JUMP)  ; LAB_0044afdc
    MOV EBX,dword ptr [ESP + 0x4]       ; 0044b00b
        ;   Label: LAB_0044b00b
    MOV EAX,dword ptr [ESP + 0xc]       ; 0044b00f
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044b013
    MOV ECX,dword ptr [EDI + 0x154]     ; 0044b017
    ADD EBX,0xf00                       ; 0044b01d
    ADD EAX,0x140                       ; 0044b023
    INC EDX                             ; 0044b028
    MOV dword ptr [ESP + 0x4],EBX       ; 0044b029
    MOV dword ptr [ESP + 0xc],EAX       ; 0044b02d
    MOV dword ptr [ESP + 0x8],EDX       ; 0044b031
    CMP EDX,ECX                         ; 0044b035
    JL 0x0044afba                       ; 0044b037
        ;   XREF to: 0044afba (CONDITIONAL_JUMP)  ; LAB_0044afba
    MOV ESP,EBP                         ; 0044b039
        ;   Label: LAB_0044b039
    POP EBP                             ; 0044b03b
    POP EDI                             ; 0044b03c
    POP ESI                             ; 0044b03d
    POP EBX                             ; 0044b03e
    NOP                                 ; 0044b03f
    RET                                 ; 0044b040
    FLD float ptr [ESP]                 ; 0044b041
        ;   Label: LAB_0044b041
    FMUL float ptr [EBP + 0x1c]         ; 0044b044
    FMUL double ptr [0x005b9d6e]        ; 0044b047 | DAT_005b9d6e
    FMUL double ptr [0x005b9d76]        ; 0044b04d | DAT_005b9d76
    CALL crt_math.c_round_FUN_005a3120  ; 0044b053
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x10]        ; 0044b058
    MOV AL,byte ptr [ESP + 0x10]        ; 0044b05c
    MOV byte ptr [ECX],AL               ; 0044b060
    JMP 0x0044affc                      ; 0044b062
        ;   XREF to: 0044affc (UNCONDITIONAL_JUMP)  ; LAB_0044affc

