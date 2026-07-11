; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004dffc0(int param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004e03c0 at 004e0750
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dffc0
        ;   Label: FUN_004dffc0
    PUSH ESI                            ; 004dffc1
    PUSH EDI                            ; 004dffc2
    PUSH EBP                            ; 004dffc3
    SUB ESP,0x14                        ; 004dffc4
    MOV ESI,dword ptr [ESP + 0x28]      ; 004dffc7
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004dffcb
    MOV EDX,0x7149f2ca                  ; 004dffcf
    MOV ECX,dword ptr [ESI + 0x54]      ; 004dffd4
    XOR EDI,EDI                         ; 004dffd7
    MOV dword ptr [ESP + 0xc],EDX       ; 004dffd9
    XOR EDX,EDX                         ; 004dffdd
    TEST ECX,ECX                        ; 004dffdf
    JLE 0x004e0032                      ; 004dffe1
        ;   XREF to: 004e0032 (CONDITIONAL_JUMP)  ; LAB_004e0032
    XOR ECX,ECX                         ; 004dffe3
    MOV EAX,dword ptr [ESI + 0x58]      ; 004dffe5
        ;   Label: LAB_004dffe5
    FLD float ptr [EBX]                 ; 004dffe8
    FSUB float ptr [ECX + EAX*0x1 + 0x4] ; 004dffea
    FSTP float ptr [ESP]                ; 004dffee
    FLD float ptr [EBX + 0x4]           ; 004dfff1
    FSUB float ptr [ECX + EAX*0x1 + 0x8] ; 004dfff4
    FST float ptr [ESP + 0x4]           ; 004dfff8
    FMUL float ptr [ESP + 0x4]          ; 004dfffc
    FLD float ptr [ESP]                 ; 004e0000
    FMUL ST0                            ; 004e0003
    FLD float ptr [EBX + 0x8]           ; 004e0005
    FSUB float ptr [ECX + EAX*0x1 + 0xc] ; 004e0008
    FXCH                                ; 004e000c
    FADDP ST2,ST0                       ; 004e000e
    FST float ptr [ESP + 0x8]           ; 004e0010
    FMUL float ptr [ESP + 0x8]          ; 004e0014
    FADDP                               ; 004e0018
    FST float ptr [ESP + 0x10]          ; 004e001a
    FCOMP float ptr [ESP + 0xc]         ; 004e001e
    FNSTSW AX                           ; 004e0022
    SAHF                                ; 004e0024
    JC 0x004e0041                       ; 004e0025
        ;   XREF to: 004e0041 (CONDITIONAL_JUMP)  ; LAB_004e0041
    INC EDX                             ; 004e0027
        ;   Label: LAB_004e0027
    MOV EBP,dword ptr [ESI + 0x54]      ; 004e0028
    ADD ECX,0x10                        ; 004e002b
    CMP EDX,EBP                         ; 004e002e
    JL 0x004dffe5                       ; 004e0030
        ;   XREF to: 004dffe5 (CONDITIONAL_JUMP)  ; LAB_004dffe5
    MOV EAX,EDI                         ; 004e0032
        ;   Label: LAB_004e0032
    ADD ESP,0x14                        ; 004e0034
    POP EBP                             ; 004e0037
    POP EDI                             ; 004e0038
    POP ESI                             ; 004e0039
    POP EBX                             ; 004e003a
    LEA EAX,[EAX]                       ; 004e003b
    MOV ECX,ECX                         ; 004e003e
    RET                                 ; 004e0040
    MOV EAX,dword ptr [ESP + 0x10]      ; 004e0041
        ;   Label: LAB_004e0041
    MOV EDI,EDX                         ; 004e0045
    MOV dword ptr [ESP + 0xc],EAX       ; 004e0047
    JMP 0x004e0027                      ; 004e004b
        ;   XREF to: 004e0027 (UNCONDITIONAL_JUMP)  ; LAB_004e0027

