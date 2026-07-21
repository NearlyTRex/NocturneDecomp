; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_codec_cpp_CLZWDictionary_findCode_FUN_004394b0(int param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   support_codec.cpp_CLZWCompress_process_FUN_004398c0 at 004398f6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004394b0
        ;   Label: support_codec.cpp_CLZWDictionary_findCode_FUN_004394b0
    MOV EBX,dword ptr [ESP + 0xc]       ; 004394b1
    MOV EAX,dword ptr [ESP + 0x10]      ; 004394b5
    TEST EAX,EAX                        ; 004394b9
    JL 0x004394e8                       ; 004394bb
        ;   XREF to: 004394e8 (CONDITIONAL_JUMP)  ; LAB_004394e8
    MOV ECX,dword ptr [ESP + 0x8]       ; 004394bd
    SHL EAX,0x4                         ; 004394c1
    MOV ECX,dword ptr [ECX + 0x10]      ; 004394c4
    MOV EAX,dword ptr [ECX + EAX*0x1 + 0x8] ; 004394c7
    TEST EAX,EAX                        ; 004394cb
    JL 0x004394e1                       ; 004394cd
        ;   XREF to: 004394e1 (CONDITIONAL_JUMP)  ; LAB_004394e1
    MOV EDX,EAX                         ; 004394cf
        ;   Label: LAB_004394cf
    SHL EDX,0x4                         ; 004394d1
    ADD EDX,ECX                         ; 004394d4
    CMP EBX,dword ptr [EDX]             ; 004394d6
    JZ 0x004394e6                       ; 004394d8
        ;   XREF to: 004394e6 (CONDITIONAL_JUMP)  ; LAB_004394e6
    MOV EAX,dword ptr [EDX + 0xc]       ; 004394da
    TEST EAX,EAX                        ; 004394dd
    JGE 0x004394cf                      ; 004394df
        ;   XREF to: 004394cf (CONDITIONAL_JUMP)  ; LAB_004394cf
    MOV EAX,0xffffffff                  ; 004394e1
        ;   Label: LAB_004394e1
    POP EBX                             ; 004394e6
        ;   Label: LAB_004394e6
    RET                                 ; 004394e7
    MOV EAX,EBX                         ; 004394e8
        ;   Label: LAB_004394e8
    POP EBX                             ; 004394ea
    RET                                 ; 004394eb

