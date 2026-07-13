; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 _CPtoLCID(undefined4 param_1)
;
;
; XREF[1]:
;   __setmbcp at 10007fac
;
; Referenced Globals:
;   void* switchdataD_10008168 = 10008150
;   byte switchdataD_1000817c = 0x0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 10008130
        ;   Label: _CPtoLCID
    SUB EAX,0x3a4                       ; 10008134
    CMP EAX,0x12                        ; 10008139
    JA 0x1000814d                       ; 1000813c
        ;   XREF to: 1000814d (CONDITIONAL_JUMP)  ; caseD_3b4
    XOR ECX,ECX                         ; 1000813e
    MOV CL,byte ptr [EAX + 0x1000817c]  ; 10008140 | switchdataD_1000817c
    JMP dword ptr [ECX*0x4 + 0x10008168] ; 10008146 | caseD_3a4 | caseD_3b4 | caseD_3a8
        ;   Label: switchD
    XOR EAX,EAX                         ; 1000814d
        ;   Label: caseD_3a5
    RET                                 ; 1000814f
    MOV EAX,0x411                       ; 10008150
        ;   Label: caseD_3a4
    RET                                 ; 10008155
    MOV EAX,0x804                       ; 10008156
        ;   Label: caseD_3a8
    RET                                 ; 1000815b
    MOV EAX,0x412                       ; 1000815c
        ;   Label: caseD_3b5
    RET                                 ; 10008161
    MOV EAX,0x404                       ; 10008162
        ;   Label: caseD_3b6
    RET                                 ; 10008167

