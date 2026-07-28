; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_dosio_cpp_getRelativeFilePath_FUN_00456700(char *dest_path,char *directory,char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   dest_path
; char *           Stack[0x8]:4   directory
; char *           Stack[0xc]:4   filename
;
; XREF[6]:
;   engine_dosio.cpp_getFileSizeWithFinder_FUN_004569a0 at 004569bc
;   engine_dosio.cpp_getFileSize_FUN_004568c0 at 004568db
;   engine_dosio.cpp_getFileTimestamp_FUN_00456910 at 0045692b
;   engine_dosio.cpp_getFile_FUN_00456a60 at 00456a87
;   engine_dosio.cpp_reopenFileStream_FUN_00456b20 at 00456b60
;   engine_pod.cpp_CPod_locateFile_FUN_004f9170 at 004f9198
;
; Referenced Globals:
;   TerminatedCString s_s_s_0057d2b1
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_00563c90
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00456700
        ;   Label: engine_dosio.cpp_getRelativeFilePath_FUN_00456700
    PUSH EDI                            ; 00456701
    MOV EDI,dword ptr [ESP + 0xc]       ; 00456702
    MOV EAX,dword ptr [ESP + 0x10]      ; 00456706
    MOV ESI,dword ptr [ESP + 0x14]      ; 0045670a
    TEST EAX,EAX                        ; 0045670e
    JZ 0x0045672a                       ; 00456710
        ;   XREF to: 0045672a (CONDITIONAL_JUMP)  ; LAB_0045672a
    CMP byte ptr [EAX],0x0              ; 00456712
    JZ 0x0045672a                       ; 00456715
        ;   XREF to: 0045672a (CONDITIONAL_JUMP)  ; LAB_0045672a
    PUSH ESI                            ; 00456717
    PUSH EAX                            ; 00456718
    PUSH 0x57d2b1                       ; 00456719 | = "%s\\%s"
    PUSH EDI                            ; 0045671e
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0045671f
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 00456724
    POP EDI                             ; 00456727
    POP ESI                             ; 00456728
    RET                                 ; 00456729
    PUSH EDI                            ; 0045672a
        ;   Label: LAB_0045672a
    MOV AL,byte ptr [ESI]               ; 0045672b
        ;   Label: LAB_0045672b
    MOV byte ptr [EDI],AL               ; 0045672d
    CMP AL,0x0                          ; 0045672f
    JZ 0x00456743                       ; 00456731
        ;   XREF to: 00456743 (CONDITIONAL_JUMP)  ; LAB_00456743
    MOV AL,byte ptr [ESI + 0x1]         ; 00456733
    ADD ESI,0x2                         ; 00456736
    MOV byte ptr [EDI + 0x1],AL         ; 00456739
    ADD EDI,0x2                         ; 0045673c
    CMP AL,0x0                          ; 0045673f
    JNZ 0x0045672b                      ; 00456741
        ;   XREF to: 0045672b (CONDITIONAL_JUMP)  ; LAB_0045672b
    POP EDI                             ; 00456743
        ;   Label: LAB_00456743
    POP EDI                             ; 00456744
    POP ESI                             ; 00456745
    RET                                 ; 00456746

