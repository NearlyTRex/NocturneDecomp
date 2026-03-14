; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeledit_cpp_readNonEmptyLine_FUN_005895f0(char *buffer,_FILE *file,int require_content)
;
; Parameters:
; char *           Stack[0x4]:4   buffer
; _FILE *          Stack[0x8]:4   file
; int              Stack[0xc]:4   require_content
;
; XREF[1]:
;   core_skeledit.cpp_CSkeleton_importSkeletonFile_FUN_00592690 at 00592a7a
;
; Referenced Globals:
;   TerminatedCString s_core_skeledit_cpp_00649cda
;   TerminatedCString s_Unexpected_end_of_file_00649cef
;   TerminatedCString s_anon_00649d07
;   uchar[257] g_CharacterClassificationTable
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_string.c_strstr_FUN_005fedd0
;
; *****************************************************************************

section .text

    NOP                                 ; 005895f0
        ;   Label: core_skeledit.cpp_readNonEmptyLine_FUN_005895f0
    NOP                                 ; 005895f1
    NOP                                 ; 005895f2
    NOP                                 ; 005895f3
    NOP                                 ; 005895f4
    NOP                                 ; 005895f5
    NOP                                 ; 005895f6
    NOP                                 ; 005895f7
    NOP                                 ; 005895f8
    NOP                                 ; 005895f9
    PUSH EBX                            ; 005895fa
    PUSH ESI                            ; 005895fb
    PUSH EDI                            ; 005895fc
    PUSH EBP                            ; 005895fd
    MOV EBP,dword ptr [ESP + 0x14]      ; 005895fe
    MOV EDI,dword ptr [ESP + 0x18]      ; 00589602
    MOV ESI,EBP                         ; 00589606
        ;   Label: LAB_00589606
    PUSH EDI                            ; 00589608
        ;   Label: LAB_00589608
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00589609
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0058960e
    MOV EBX,EAX                         ; 00589611
    CMP EAX,-0x1                        ; 00589613
    JNZ 0x00589649                      ; 00589616
        ;   XREF to: 00589649 (CONDITIONAL_JUMP)  ; LAB_00589649
    CMP dword ptr [ESP + 0x1c],0x0      ; 00589618
    JZ 0x00589642                       ; 0058961d
        ;   XREF to: 00589642 (CONDITIONAL_JUMP)  ; LAB_00589642
    MOV ECX,0x649cda                    ; 0058961f | = "..\\core\\skeledit.cpp"
    MOV EBX,0xd0                        ; 00589624
    PUSH 0x649cef                       ; 00589629 | = "Unexpected end of file!"
    MOV dword ptr [0x02f0ca48],ECX      ; 0058962e | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 00589634 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058963a
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0058963f
    XOR EAX,EAX                         ; 00589642
        ;   Label: LAB_00589642
    POP EBP                             ; 00589644
    POP EDI                             ; 00589645
    POP ESI                             ; 00589646
    POP EBX                             ; 00589647
    RET                                 ; 00589648
    INC AL                              ; 00589649
        ;   Label: LAB_00589649
    AND EAX,0xff                        ; 0058964b
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 00589650 | g_CharacterClassificationTable
    JNZ 0x00589608                      ; 00589657
        ;   XREF to: 00589608 (CONDITIONAL_JUMP)  ; LAB_00589608
    PUSH EDI                            ; 00589659
        ;   Label: LAB_00589659
    MOV byte ptr [ESI],BL               ; 0058965a
    INC ESI                             ; 0058965c
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0058965d
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00589662
    MOV EBX,EAX                         ; 00589665
    CMP EAX,-0x1                        ; 00589667
    JZ 0x00589676                       ; 0058966a
        ;   XREF to: 00589676 (CONDITIONAL_JUMP)  ; LAB_00589676
    CMP EAX,0xd                         ; 0058966c
    JZ 0x00589676                       ; 0058966f
        ;   XREF to: 00589676 (CONDITIONAL_JUMP)  ; LAB_00589676
    CMP EAX,0xa                         ; 00589671
    JNZ 0x00589659                      ; 00589674
        ;   XREF to: 00589659 (CONDITIONAL_JUMP)  ; LAB_00589659
    PUSH 0x649d07                       ; 00589676 | = "//"
        ;   Label: LAB_00589676
    PUSH EBP                            ; 0058967b
    MOV byte ptr [ESI],0x0              ; 0058967c
    CALL crt_string.c_strstr_FUN_005fedd0 ; 0058967f
        ;   XREF to: 005fedd0 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strstr_FUN_005fedd0(char * haystack_str, char * needle_str)
    ADD ESP,0x8                         ; 00589684
    TEST EAX,EAX                        ; 00589687
    JZ 0x0058968e                       ; 00589689
        ;   XREF to: 0058968e (CONDITIONAL_JUMP)  ; LAB_0058968e
    MOV byte ptr [EAX],0x0              ; 0058968b
    CMP byte ptr [EBP],0x0              ; 0058968e
        ;   Label: LAB_0058968e
    JZ 0x00589606                       ; 00589692
        ;   XREF to: 00589606 (CONDITIONAL_JUMP)  ; LAB_00589606
    MOV EAX,0x1                         ; 00589698
    POP EBP                             ; 0058969d
    POP EDI                             ; 0058969e
    POP ESI                             ; 0058969f
    POP EBX                             ; 005896a0
    RET                                 ; 005896a1

