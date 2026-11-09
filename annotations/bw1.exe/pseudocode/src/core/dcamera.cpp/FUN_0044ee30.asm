; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcamera_cpp_FUN_0044ee30(int param_1,float *param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0 at 0054fa3e
;
; Referenced Globals:
;   undefined4 DAT_005d7707
;   undefined4 DAT_005d770f
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044ee30
        ;   Label: core_dcamera.cpp_FUN_0044ee30
    PUSH ESI                            ; 0044ee31
    PUSH EDI                            ; 0044ee32
    PUSH EBP                            ; 0044ee33
    MOV EBP,ESP                         ; 0044ee34
    SUB ESP,0x14                        ; 0044ee36
    AND ESP,0xfffffff8                  ; 0044ee39
    MOV EDI,dword ptr [EBP + 0x14]      ; 0044ee3c
    MOV ESI,dword ptr [EBP + 0x18]      ; 0044ee3f
    PUSH 0x12d40                        ; 0044ee42
    PUSH 0x0                            ; 0044ee47
    PUSH 0xafd9d8                       ; 0044ee49
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0044ee4e
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0044ee53
    TEST ESI,ESI                        ; 0044ee56
    JZ 0x0044eef9                       ; 0044ee58
        ;   XREF to: 0044eef9 (CONDITIONAL_JUMP)  ; LAB_0044eef9
    XOR EDX,EDX                         ; 0044ee5e
    MOV ECX,dword ptr [EDI + 0x154]     ; 0044ee60
    MOV dword ptr [ESP + 0x8],EDX       ; 0044ee66
    TEST ECX,ECX                        ; 0044ee6a
    JLE 0x0044eef9                      ; 0044ee6c
        ;   XREF to: 0044eef9 (CONDITIONAL_JUMP)  ; LAB_0044eef9
    MOV dword ptr [ESP + 0x4],EDX       ; 0044ee72
    MOV dword ptr [ESP + 0xc],EDX       ; 0044ee76
    MOV ECX,0xafd9d8                    ; 0044ee7a
        ;   Label: LAB_0044ee7a
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044ee7f
    MOV EBX,dword ptr [ESP + 0x4]       ; 0044ee83
    ADD ECX,EDX                         ; 0044ee87
    MOV EDX,0xa1bad8                    ; 0044ee89
    MOV EAX,dword ptr [EDI + 0x150]     ; 0044ee8e
    ADD EDX,EBX                         ; 0044ee94
    XOR EBX,EBX                         ; 0044ee96
    TEST EAX,EAX                        ; 0044ee98
    JLE 0x0044eecb                      ; 0044ee9a
        ;   XREF to: 0044eecb (CONDITIONAL_JUMP)  ; LAB_0044eecb
    FLD float ptr [ESI + 0x4]           ; 0044ee9c
        ;   Label: LAB_0044ee9c
    FMUL float ptr [EDX + 0x4]          ; 0044ee9f
    FLD float ptr [ESI]                 ; 0044eea2
    FMUL float ptr [EDX]                ; 0044eea4
    FADDP                               ; 0044eea6
    FLD float ptr [ESI + 0x8]           ; 0044eea8
    FMUL float ptr [EDX + 0x8]          ; 0044eeab
    FADDP                               ; 0044eeae
    FST float ptr [ESP]                 ; 0044eeb0
    FLDZ                                ; 0044eeb3
    FCOMPP                              ; 0044eeb5
    FNSTSW AX                           ; 0044eeb7
    SAHF                                ; 0044eeb9
    JC 0x0044ef01                       ; 0044eeba
        ;   XREF to: 0044ef01 (CONDITIONAL_JUMP)  ; LAB_0044ef01
    ADD EDX,0xc                         ; 0044eebc
        ;   Label: LAB_0044eebc
    INC EBX                             ; 0044eebf
    MOV EAX,dword ptr [EDI + 0x150]     ; 0044eec0
    INC ECX                             ; 0044eec6
    CMP EBX,EAX                         ; 0044eec7
    JL 0x0044ee9c                       ; 0044eec9
        ;   XREF to: 0044ee9c (CONDITIONAL_JUMP)  ; LAB_0044ee9c
    MOV EBX,dword ptr [ESP + 0x4]       ; 0044eecb
        ;   Label: LAB_0044eecb
    MOV EAX,dword ptr [ESP + 0xc]       ; 0044eecf
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044eed3
    MOV ECX,dword ptr [EDI + 0x154]     ; 0044eed7
    ADD EBX,0xf00                       ; 0044eedd
    ADD EAX,0x140                       ; 0044eee3
    INC EDX                             ; 0044eee8
    MOV dword ptr [ESP + 0x4],EBX       ; 0044eee9
    MOV dword ptr [ESP + 0xc],EAX       ; 0044eeed
    MOV dword ptr [ESP + 0x8],EDX       ; 0044eef1
    CMP EDX,ECX                         ; 0044eef5
    JL 0x0044ee7a                       ; 0044eef7
        ;   XREF to: 0044ee7a (CONDITIONAL_JUMP)  ; LAB_0044ee7a
    MOV ESP,EBP                         ; 0044eef9
        ;   Label: LAB_0044eef9
    POP EBP                             ; 0044eefb
    POP EDI                             ; 0044eefc
    POP ESI                             ; 0044eefd
    POP EBX                             ; 0044eefe
    NOP                                 ; 0044eeff
    RET                                 ; 0044ef00
    FLD float ptr [ESP]                 ; 0044ef01
        ;   Label: LAB_0044ef01
    FMUL float ptr [EBP + 0x1c]         ; 0044ef04
    FMUL double ptr [0x005d7707]        ; 0044ef07 | DAT_005d7707
    FMUL double ptr [0x005d770f]        ; 0044ef0d | DAT_005d770f
    CALL crt_math.c_round_FUN_005c03a0  ; 0044ef13
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x10]        ; 0044ef18
    MOV AL,byte ptr [ESP + 0x10]        ; 0044ef1c
    MOV byte ptr [ECX],AL               ; 0044ef20
    JMP 0x0044eebc                      ; 0044ef22
        ;   XREF to: 0044eebc (UNCONDITIONAL_JUMP)  ; LAB_0044eebc

