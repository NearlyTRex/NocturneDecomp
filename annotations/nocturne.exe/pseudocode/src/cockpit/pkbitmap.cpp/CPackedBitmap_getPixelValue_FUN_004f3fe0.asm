; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint cockpit_pkbitmap_cpp_CPackedBitmap_getPixelValue_FUN_004f3fe0(int param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   cockpit_ckptutil.c_drawLineListFromBitmap_FUN_0042f260 at 0042f2b3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3fe0
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_getPixelValue_FUN_004f3fe0
    PUSH ESI                            ; 004f3fe1
    PUSH EDI                            ; 004f3fe2
    MOV EDI,dword ptr [ESP + 0x10]      ; 004f3fe3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004f3fe7
    MOV EDX,dword ptr [ESP + 0x18]      ; 004f3feb
    TEST EDX,EDX                        ; 004f3fef
    JL 0x004f4035                       ; 004f3ff1
        ;   XREF to: 004f4035 (CONDITIONAL_JUMP)  ; LAB_004f4035
    CMP EDX,dword ptr [EDI + 0x1c]      ; 004f3ff3
    JGE 0x004f4035                      ; 004f3ff6
        ;   XREF to: 004f4035 (CONDITIONAL_JUMP)  ; LAB_004f4035
    SHL EDX,0x2                         ; 004f3ff8
    MOV EAX,dword ptr [EDI + 0x20]      ; 004f3ffb
    ADD EDX,EAX                         ; 004f3ffe
    MOV EDI,dword ptr [EDI + 0x14]      ; 004f4000
    MOV EAX,dword ptr [EDX]             ; 004f4003
    MOV ESI,dword ptr [EDX + 0x4]       ; 004f4005
    ADD EAX,EDI                         ; 004f4008
    ADD EDI,ESI                         ; 004f400a
    CMP EAX,EDI                         ; 004f400c
    JNC 0x004f4035                      ; 004f400e
        ;   XREF to: 004f4035 (CONDITIONAL_JUMP)  ; LAB_004f4035
    XOR EDX,EDX                         ; 004f4010
        ;   Label: LAB_004f4010
    MOV DX,word ptr [EAX]               ; 004f4012
    CMP EDX,EBX                         ; 004f4015
    JG 0x004f4035                       ; 004f4017
        ;   XREF to: 004f4035 (CONDITIONAL_JUMP)  ; LAB_004f4035
    XOR ECX,ECX                         ; 004f4019
    MOV CX,word ptr [EAX + 0x2]         ; 004f401b
    LEA ESI,[EDX + ECX*0x1]             ; 004f401f
    ADD EAX,0x4                         ; 004f4022
    CMP EBX,ESI                         ; 004f4025
    JL 0x004f403e                       ; 004f4027
        ;   XREF to: 004f403e (CONDITIONAL_JUMP)  ; LAB_004f403e
    LEA EDX,[ECX + 0x3]                 ; 004f4029
    AND DL,0xfc                         ; 004f402c
    ADD EAX,EDX                         ; 004f402f
    CMP EAX,EDI                         ; 004f4031
    JC 0x004f4010                       ; 004f4033
        ;   XREF to: 004f4010 (CONDITIONAL_JUMP)  ; LAB_004f4010
    MOV EAX,0xffffffff                  ; 004f4035
        ;   Label: LAB_004f4035
    POP EDI                             ; 004f403a
    POP ESI                             ; 004f403b
    POP EBX                             ; 004f403c
    RET                                 ; 004f403d
    SUB EBX,EDX                         ; 004f403e
        ;   Label: LAB_004f403e
    MOV AL,byte ptr [EBX + EAX*0x1]     ; 004f4040
    AND EAX,0xff                        ; 004f4043
    POP EDI                             ; 004f4048
    POP ESI                             ; 004f4049
    POP EBX                             ; 004f404a
    RET                                 ; 004f404b

