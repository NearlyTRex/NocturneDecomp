; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_mp3_cpp_applyScalefactorsToLayer2Samples_FUN_00527130(int param_1,int param_2,int param_3)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00527130
        ;   Label: sound_mp3.cpp_applyScalefactorsToLayer2Samples_FUN_00527130
    PUSH ESI                            ; 00527131
    PUSH EDI                            ; 00527132
    SUB ESP,0x8                         ; 00527133
    MOV ESI,dword ptr [ESP + 0x20]      ; 00527136
    XOR EDI,EDI                         ; 0052713a
    MOV ESI,dword ptr [ESI + 0x10]      ; 0052713c
    XOR EDX,EDX                         ; 0052713f
        ;   Label: LAB_0052713f
    TEST ESI,ESI                        ; 00527141
    JLE 0x00527176                      ; 00527143
        ;   XREF to: 00527176 (CONDITIONAL_JUMP)  ; LAB_00527176
    MOV EAX,dword ptr [ESP + 0x18]      ; 00527145
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00527149
    ADD EAX,EDI                         ; 0052714d
    ADD ECX,EDI                         ; 0052714f
    FLD float ptr [EAX]                 ; 00527151
        ;   Label: LAB_00527151
    MOV EBX,dword ptr [ECX]             ; 00527153
    FLD ST0                             ; 00527155
    FMUL double ptr [EBX*0x8 + 0x620490] ; 00527157
    ADD ECX,0x180                       ; 0052715e
    ADD EAX,0x180                       ; 00527164
    INC EDX                             ; 00527169
    FSTP ST1                            ; 0052716a
    FSTP float ptr [EAX + 0xfffffe80]   ; 0052716c
    CMP EDX,ESI                         ; 00527172
    JL 0x00527151                       ; 00527174
        ;   XREF to: 00527151 (CONDITIONAL_JUMP)  ; LAB_00527151
    ADD EDI,0x4                         ; 00527176
        ;   Label: LAB_00527176
    CMP EDI,0x80                        ; 00527179
    JNZ 0x0052713f                      ; 0052717f
        ;   XREF to: 0052713f (CONDITIONAL_JUMP)  ; LAB_0052713f
    ADD ESP,0x8                         ; 00527181
    POP EDI                             ; 00527184
    POP ESI                             ; 00527185
    POP EBX                             ; 00527186
    RET                                 ; 00527187

