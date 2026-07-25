; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046e9f0(float *param_1)
;
; Local Variables:
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   undefined4 DAT_0057e4ae
;   double DOUBLE_0057e4b6 = 65536
;   double DOUBLE_0057e4be = 256
;   undefined4 DAT_0059c8e0
;   undefined4 DAT_005ae700
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;   engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0
;   wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046e9f0
        ;   Label: FUN_0046e9f0
    PUSH ESI                            ; 0046e9f1
    PUSH EDI                            ; 0046e9f2
    SUB ESP,0x6c                        ; 0046e9f3
    MOV ESI,dword ptr [ESP + 0x7c]      ; 0046e9f6
    LEA EBX,[ESP + 0x48]                ; 0046e9fa
    MOV EAX,ESI                         ; 0046e9fe
    MOV EDX,dword ptr [0x005ae700]      ; 0046ea00 | DAT_005ae700
    FLD float ptr [EAX]                 ; 0046ea06
    FMUL float ptr [0x0059c8e0]         ; 0046ea08 | DAT_0059c8e0
    FISTP dword ptr [EBX]               ; 0046ea0e
    FLD float ptr [EAX + 0x4]           ; 0046ea10
    FMUL float ptr [0x0059c8e0]         ; 0046ea13 | DAT_0059c8e0
    FISTP dword ptr [EBX + 0x4]         ; 0046ea19
    FLD float ptr [EAX + 0x8]           ; 0046ea1c
    FMUL float ptr [0x0059c8e0]         ; 0046ea1f | DAT_0059c8e0
    FISTP dword ptr [EBX + 0x8]         ; 0046ea25
    LEA EAX,[ESP + 0x48]                ; 0046ea28
    PUSH EAX                            ; 0046ea2c
    MOV EAX,dword ptr [EDX]             ; 0046ea2d | DAT_01b4d738
    PUSH EAX                            ; 0046ea2f
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c ; 0046ea30
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c()
    LEA EBX,[ESP + 0x68]                ; 0046ea35
    ADD ESP,0x8                         ; 0046ea39
    LEA EAX,[ESI + 0xc]                 ; 0046ea3c
    MOV EDX,dword ptr [0x005ae700]      ; 0046ea3f | DAT_005ae700
    FLD float ptr [EAX]                 ; 0046ea45
    FMUL float ptr [0x0059c8e0]         ; 0046ea47 | DAT_0059c8e0
    FISTP dword ptr [EBX]               ; 0046ea4d
    FLD float ptr [EAX + 0x4]           ; 0046ea4f
    FMUL float ptr [0x0059c8e0]         ; 0046ea52 | DAT_0059c8e0
    FISTP dword ptr [EBX + 0x4]         ; 0046ea58
    FLD float ptr [EAX + 0x8]           ; 0046ea5b
    FMUL float ptr [0x0059c8e0]         ; 0046ea5e | DAT_0059c8e0
    FISTP dword ptr [EBX + 0x8]         ; 0046ea64
    LEA EAX,[ESP + 0x60]                ; 0046ea67
    PUSH EAX                            ; 0046ea6b
    MOV EAX,dword ptr [EDX]             ; 0046ea6c | DAT_01b4d738
    ADD EAX,0x30                        ; 0046ea6e
    PUSH EAX                            ; 0046ea71
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c ; 0046ea72
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c()
    LEA EBX,[ESP + 0x5c]                ; 0046ea77
    ADD ESP,0x8                         ; 0046ea7b
    LEA EAX,[ESI + 0x18]                ; 0046ea7e
    MOV EDX,dword ptr [0x005ae700]      ; 0046ea81 | DAT_005ae700
    FLD float ptr [EAX]                 ; 0046ea87
    FMUL float ptr [0x0059c8e0]         ; 0046ea89 | DAT_0059c8e0
    FISTP dword ptr [EBX]               ; 0046ea8f
    FLD float ptr [EAX + 0x4]           ; 0046ea91
    FMUL float ptr [0x0059c8e0]         ; 0046ea94 | DAT_0059c8e0
    FISTP dword ptr [EBX + 0x4]         ; 0046ea9a
    FLD float ptr [EAX + 0x8]           ; 0046ea9d
    FMUL float ptr [0x0059c8e0]         ; 0046eaa0 | DAT_0059c8e0
    FISTP dword ptr [EBX + 0x8]         ; 0046eaa6
    LEA EAX,[ESP + 0x54]                ; 0046eaa9
    PUSH EAX                            ; 0046eaad
    MOV EAX,dword ptr [EDX]             ; 0046eaae | DAT_01b4d738
    ADD EAX,0x60                        ; 0046eab0
    PUSH EAX                            ; 0046eab3
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c ; 0046eab4
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c()
    MOV EDX,0x3                         ; 0046eab9
    ADD ESP,0x8                         ; 0046eabe
    MOV dword ptr [ESP + 0x4],EDX       ; 0046eac1
    FLD double ptr [0x0057e4ae]         ; 0046eac5 | DAT_0057e4ae
    FLD float ptr [ESI + 0x24]          ; 0046eacb
    FMUL ST1                            ; 0046eace
    CALL crt_math.c_round_FUN_00563a30  ; 0046ead0
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x8]         ; 0046ead5
    FLD float ptr [ESI + 0x28]          ; 0046ead9
    FMUL ST1                            ; 0046eadc
    CALL crt_math.c_round_FUN_00563a30  ; 0046eade
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0xc]         ; 0046eae3
    FMUL float ptr [ESI + 0x2c]         ; 0046eae7
    CALL crt_math.c_round_FUN_00563a30  ; 0046eaea
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x10]        ; 0046eaef
    FLD float ptr [ESI + 0x30]          ; 0046eaf3
    FMUL double ptr [0x0057e4b6]        ; 0046eaf6 | DOUBLE_0057e4b6
    FMUL double ptr [0x0057e4be]        ; 0046eafc | DOUBLE_0057e4be
    MOV EAX,ESP                         ; 0046eb02
    MOV EBX,0x1                         ; 0046eb04
    PUSH EAX                            ; 0046eb09
    MOV EDI,dword ptr [0x005ae700]      ; 0046eb0a | DAT_005ae700
    XOR ECX,ECX                         ; 0046eb10
    PUSH EDI                            ; 0046eb12 | DAT_01b4d738
    MOV ESI,0x2                         ; 0046eb13
    MOV dword ptr [ESP + 0x20],ECX      ; 0046eb18
    MOV dword ptr [ESP + 0x2c],EBX      ; 0046eb1c
    MOV dword ptr [ESP + 0x38],ESI      ; 0046eb20
    CALL crt_math.c_round_FUN_00563a30  ; 0046eb24
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x1c]        ; 0046eb29
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0 ; 0046eb2d
        ;   XREF to: 0045eee0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0()
    ADD ESP,0x8                         ; 0046eb32
    ADD ESP,0x6c                        ; 0046eb35
    POP EDI                             ; 0046eb38
    POP ESI                             ; 0046eb39
    POP EBX                             ; 0046eb3a
    RET                                 ; 0046eb3b

