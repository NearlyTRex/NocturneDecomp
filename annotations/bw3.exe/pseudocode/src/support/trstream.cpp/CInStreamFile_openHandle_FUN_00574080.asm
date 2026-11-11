; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl support_trstream_cpp_CInStreamFile_openHandle_FUN_00574080(CInStreamFile *this_ptr,int param_2,int param_3,int param_4)
;
; Parameters:
; CInStreamFile *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
; int              Stack[0xc]:4   param_3
; int              Stack[0x10]:4   param_4
;
; Referenced Globals:
;   TerminatedCString s_support_trstream_cpp_005d6e42
;   TerminatedCString s_Hey_we_re_using_windows_005d6e5a
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_stdio.c_fseek_FUN_005a457c
;   support_trstream.cpp_FUN_00573e00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574080
        ;   Label: support_trstream.cpp_CInStreamFile_openHandle_FUN_00574080
    PUSH ESI                            ; 00574081
    PUSH EDI                            ; 00574082
    MOV EBX,dword ptr [ESP + 0x10]      ; 00574083
    MOV EDX,0x5d6e42                    ; 00574087 | = "..\\support\\trstream.cpp"
    MOV ECX,0x714                       ; 0057408c
    PUSH 0x5d6e5a                       ; 00574091 | = "Hey, we're using windows handles for ..."
    MOV dword ptr [0x01d71de0],EDX      ; 00574096 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0057409c | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 005740a2
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 005740a7
    MOV EAX,dword ptr [EBX]             ; 005740aa
    PUSH EBX                            ; 005740ac
    CALL dword ptr [EAX + 0x24]         ; 005740ad
    ADD ESP,0x4                         ; 005740b0
    MOV dword ptr [EBX + 0x10],0x0      ; 005740b3
    MOV EAX,dword ptr [ESP + 0x14]      ; 005740ba
    MOV dword ptr [EBX + 0x4],EAX       ; 005740be
    MOV EAX,dword ptr [ESP + 0x18]      ; 005740c1
    PUSH 0x0                            ; 005740c5
    MOV dword ptr [EBX + 0x8],EAX       ; 005740c7
    MOV EAX,dword ptr [ESP + 0x20]      ; 005740ca
    MOV ESI,dword ptr [EBX + 0x10]      ; 005740ce
    MOV dword ptr [EBX + 0xc],EAX       ; 005740d1
    ADD EAX,ESI                         ; 005740d4
    PUSH EAX                            ; 005740d6
    MOV EDI,dword ptr [EBX + 0x4]       ; 005740d7
    PUSH EDI                            ; 005740da
    CALL crt_stdio.c_fseek_FUN_005a457c ; 005740db
        ;   XREF to: 005a457c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fseek_FUN_005a457c()
    ADD ESP,0xc                         ; 005740e0
    MOV EAX,dword ptr [EBX]             ; 005740e3
    PUSH EBX                            ; 005740e5
    CALL dword ptr [EAX + 0x1c]         ; 005740e6
    ADD ESP,0x4                         ; 005740e9
    TEST EAX,EAX                        ; 005740ec
    JZ 0x00574102                       ; 005740ee
        ;   XREF to: 00574102 (CONDITIONAL_JUMP)  ; LAB_00574102
    PUSH EBX                            ; 005740f0
    CALL support_trstream.cpp_FUN_00573e00 ; 005740f1
        ;   XREF to: 00573e00 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_00573e00()
    MOV EAX,0x1                         ; 005740f6
    ADD ESP,0x4                         ; 005740fb
    POP EDI                             ; 005740fe
    POP ESI                             ; 005740ff
    POP EBX                             ; 00574100
    RET                                 ; 00574101
    PUSH EBX                            ; 00574102
        ;   Label: LAB_00574102
    MOV EAX,dword ptr [EBX]             ; 00574103
    CALL dword ptr [EAX + 0x24]         ; 00574105
    ADD ESP,0x4                         ; 00574108
    XOR EAX,EAX                         ; 0057410b
    POP EDI                             ; 0057410d
    POP ESI                             ; 0057410e
    POP EBX                             ; 0057410f
    RET                                 ; 00574110

