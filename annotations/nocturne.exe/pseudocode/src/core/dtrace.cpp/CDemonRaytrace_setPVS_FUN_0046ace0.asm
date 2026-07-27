; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_setPVS_FUN_0046ace0(int param_1,int param_2,int *param_3)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00507c80 at 00507e7c
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_0057e266
;   TerminatedCString s_CDemonRaytrace_setPVS_To_0057e279
;   undefined4 DAT_01b7b744
;   undefined4 DAT_01b7b748
;   undefined4 DAT_01b7b750
;   undefined4 DAT_01b8efcc
;   undefined4 DAT_01b8efd0
;   undefined4 DAT_01b8efd4
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046ace0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_setPVS_FUN_0046ace0
    PUSH EBP                            ; 0046ace1
    SUB ESP,0x18                        ; 0046ace2
    MOV EBX,dword ptr [ESP + 0x24]      ; 0046ace5
    MOV EAX,dword ptr [ESP + 0x28]      ; 0046ace9
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0046aced
    XOR EDX,EDX                         ; 0046acf1
    MOV dword ptr [0x01b7b748],EDX      ; 0046acf3 | DAT_01b7b748
    CMP EAX,0x1                         ; 0046acf9
    JL 0x0046ae03                       ; 0046acfc
        ;   XREF to: 0046ae03 (CONDITIONAL_JUMP)  ; LAB_0046ae03
    TEST EBP,EBP                        ; 0046ad02
    JZ 0x0046ae03                       ; 0046ad04
        ;   XREF to: 0046ae03 (CONDITIONAL_JUMP)  ; LAB_0046ae03
    PUSH EDI                            ; 0046ad0a
    PUSH ESI                            ; 0046ad0b
    MOV [0x01b7b744],EAX                ; 0046ad0c | DAT_01b7b744
    CMP EAX,0x4e20                      ; 0046ad11
    JG 0x0046ae09                       ; 0046ad16
        ;   XREF to: 0046ae09 (CONDITIONAL_JUMP)  ; LAB_0046ae09
    MOV EAX,[0x01b7b744]                ; 0046ad1c | DAT_01b7b744
        ;   Label: LAB_0046ad1c
    XOR EDI,EDI                         ; 0046ad21
    TEST EAX,EAX                        ; 0046ad23
    JLE 0x0046adf7                      ; 0046ad25
        ;   XREF to: 0046adf7 (CONDITIONAL_JUMP)  ; LAB_0046adf7
    MOV ESI,0x1b8efcc                   ; 0046ad2b
    LEA EAX,[EDI*0x4 + 0x0]             ; 0046ad30
        ;   Label: LAB_0046ad30
    MOV ECX,dword ptr [EBP]             ; 0046ad37
    MOV dword ptr [ESP + 0x1c],EAX      ; 0046ad3a
    IMUL EAX,ECX,0x34                   ; 0046ad3e
    MOV EDX,dword ptr [EBX + 0x50]      ; 0046ad41
    ADD EAX,EDX                         ; 0046ad44
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0046ad46
    MOV dword ptr [EDX + 0x1b7b74c],EAX ; 0046ad4a | DAT_01b7b750
    MOV EDX,ECX                         ; 0046ad50
    MOV EAX,ECX                         ; 0046ad52
    SAR EDX,0x1f                        ; 0046ad54
    IDIV dword ptr [EBX + 0x48]         ; 0046ad57
    MOV dword ptr [ESP + 0x14],EDX      ; 0046ad5a
    MOV EDX,ECX                         ; 0046ad5e
    MOV EAX,ECX                         ; 0046ad60
    SAR EDX,0x1f                        ; 0046ad62
    MOV ECX,dword ptr [EBX + 0x48]      ; 0046ad65
    IDIV ECX                            ; 0046ad68
    MOV EDX,EAX                         ; 0046ad6a
    SAR EDX,0x1f                        ; 0046ad6c
    MOV ECX,EAX                         ; 0046ad6f
    IDIV dword ptr [EBX + 0x44]         ; 0046ad71
    MOV dword ptr [ESP + 0x18],EDX      ; 0046ad74
    MOV EDX,ECX                         ; 0046ad78
    MOV EAX,ECX                         ; 0046ad7a
    SAR EDX,0x1f                        ; 0046ad7c
    MOV ECX,dword ptr [EBX + 0x44]      ; 0046ad7f
    IDIV ECX                            ; 0046ad82
    MOV dword ptr [ESP + 0x1c],EAX      ; 0046ad84
    MOV EAX,dword ptr [ESP + 0x18]      ; 0046ad88
    FILD dword ptr [ESP + 0x1c]         ; 0046ad8c
    MOV dword ptr [ESP + 0x1c],EAX      ; 0046ad90
    FMUL float ptr [EBX + 0x28]         ; 0046ad94
    FILD dword ptr [ESP + 0x1c]         ; 0046ad97
    FXCH                                ; 0046ad9b
    FADD float ptr [EBX + 0x10]         ; 0046ad9d
    MOV EAX,dword ptr [ESP + 0x14]      ; 0046ada0
    FSTP float ptr [ESP + 0x8]          ; 0046ada4
    FMUL float ptr [EBX + 0x2c]         ; 0046ada8
    MOV dword ptr [ESP + 0x1c],EAX      ; 0046adab
    FADD float ptr [EBX + 0x14]         ; 0046adaf
    FILD dword ptr [ESP + 0x1c]         ; 0046adb2
    FXCH                                ; 0046adb6
    FSTP float ptr [ESP + 0xc]          ; 0046adb8
    FMUL float ptr [EBX + 0x30]         ; 0046adbc
    FADD float ptr [EBX + 0x18]         ; 0046adbf
    LEA EAX,[ESP + 0x8]                 ; 0046adc2
    FSTP float ptr [ESP + 0x10]         ; 0046adc6
    CMP ESI,EAX                         ; 0046adca
    JZ 0x0046ade2                       ; 0046adcc
        ;   XREF to: 0046ade2 (CONDITIONAL_JUMP)  ; LAB_0046ade2
    MOV EAX,dword ptr [ESP + 0x8]       ; 0046adce
    MOV dword ptr [ESI],EAX             ; 0046add2 | DAT_01b8efcc
    MOV EAX,dword ptr [ESP + 0xc]       ; 0046add4
    MOV dword ptr [ESI + 0x4],EAX       ; 0046add8 | DAT_01b8efd0
    MOV EAX,dword ptr [ESP + 0x10]      ; 0046addb
    MOV dword ptr [ESI + 0x8],EAX       ; 0046addf | DAT_01b8efd4
    MOV EDX,dword ptr [0x01b7b744]      ; 0046ade2 | DAT_01b7b744
        ;   Label: LAB_0046ade2
    ADD ESI,0xc                         ; 0046ade8
    INC EDI                             ; 0046adeb
    ADD EBP,0x4                         ; 0046adec
    CMP EDI,EDX                         ; 0046adef
    JL 0x0046ad30                       ; 0046adf1
        ;   XREF to: 0046ad30 (CONDITIONAL_JUMP)  ; LAB_0046ad30
    MOV dword ptr [0x01b7b748],0x1      ; 0046adf7 | DAT_01b7b748
        ;   Label: LAB_0046adf7
    POP ESI                             ; 0046ae01
    POP EDI                             ; 0046ae02
    ADD ESP,0x18                        ; 0046ae03
        ;   Label: LAB_0046ae03
    POP EBP                             ; 0046ae06
    POP EBX                             ; 0046ae07
    RET                                 ; 0046ae08
    MOV ECX,0x57e266                    ; 0046ae09 | = "..\\core\\dtrace.cpp"
        ;   Label: LAB_0046ae09
    MOV ESI,0x8c9                       ; 0046ae0e
    PUSH 0x57e279                       ; 0046ae13 | = "CDemonRaytrace::setPVS - Too many dra..."
    MOV dword ptr [0x01cc4800],ECX      ; 0046ae18 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 0046ae1e | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0046ae24
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0046ae29
    JMP 0x0046ad1c                      ; 0046ae2c
        ;   XREF to: 0046ad1c (UNCONDITIONAL_JUMP)  ; LAB_0046ad1c

