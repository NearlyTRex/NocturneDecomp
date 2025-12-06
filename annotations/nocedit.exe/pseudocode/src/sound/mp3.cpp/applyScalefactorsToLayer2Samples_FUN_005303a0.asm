; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_mp3.cpp_applyScalefactorsToLayer2Samples_FUN_005303a0(float * sample_array, int * scalefactor_indices, SMpegFrame * frame_info)
;
; Parameters:
; float *          Stack[0x4]:4   sample_array
; int *            Stack[0x8]:4   scalefactor_indices
; SMpegFrame *     Stack[0xc]:4   frame_info
;
; Referenced Globals:
;   double[64] g_MpegScalefactorTable
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005303a0
        ;   Label: sound_mp3.cpp_applyScalefactorsToLayer2Samples_FUN_005303a0
    PUSH ESI                            ; 005303a1
    PUSH EDI                            ; 005303a2
    SUB ESP,0x8                         ; 005303a3
    MOV ESI,dword ptr [ESP + 0x20]      ; 005303a6
    XOR EDI,EDI                         ; 005303aa
    MOV ESI,dword ptr [ESI + 0x10]      ; 005303ac
    XOR EDX,EDX                         ; 005303af
        ;   Label: LAB_005303af
    TEST ESI,ESI                        ; 005303b1
    JLE 0x005303e6                      ; 005303b3 | LAB_005303e6
        ;   XREF to: 005303e6 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x18]      ; 005303b5
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005303b9
    ADD EAX,EDI                         ; 005303bd
    ADD ECX,EDI                         ; 005303bf
    FLD float ptr [EAX]                 ; 005303c1
        ;   Label: LAB_005303c1
    MOV EBX,dword ptr [ECX]             ; 005303c3
    FLD ST0                             ; 005303c5
    FMUL double ptr [EBX*0x8 + 0x67e3c0] ; 005303c7 | double[64] g_MpegScalefactorTable
    ADD ECX,0x180                       ; 005303ce
    ADD EAX,0x180                       ; 005303d4
    INC EDX                             ; 005303d9
    FSTP ST1                            ; 005303da
    FSTP float ptr [EAX + 0xfffffe80]   ; 005303dc
    CMP EDX,ESI                         ; 005303e2
    JL 0x005303c1                       ; 005303e4 | LAB_005303c1
        ;   XREF to: 005303c1 (CONDITIONAL_JUMP)
    ADD EDI,0x4                         ; 005303e6
        ;   Label: LAB_005303e6
    CMP EDI,0x80                        ; 005303e9
    JNZ 0x005303af                      ; 005303ef | LAB_005303af
        ;   XREF to: 005303af (CONDITIONAL_JUMP)
    ADD ESP,0x8                         ; 005303f1
    POP EDI                             ; 005303f4
    POP ESI                             ; 005303f5
    POP EBX                             ; 005303f6
    RET                                 ; 005303f7

