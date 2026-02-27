; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c_fgetc_FUN_005fe840(_FILE *file)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file
;
; XREF[66]:
;   cockpit_ckptutil.c_loadRotatedBitmapFile_FUN_00434690 at 004346fb
;   core_actor.cpp_archiveBox_FUN_0040bd70 at 0040bd8b
;   core_actor.cpp_archiveClothList_FUN_0040be60 at 0040be80
;   core_actor.cpp_archiveDescription_FUN_0040b290 at 0040b2ab
;   core_actor.cpp_archiveMotionState_FUN_0040b9f0 at 0040ba0b
;   core_actor.cpp_archivePartStatus_FUN_0040bae0 at 0040bb03
;   core_actor.cpp_archiveRules_FUN_0040c000 at 0040c0c2
;   core_actor.cpp_archiveString_FUN_0040b5c0 at 0040b5e0
;   core_conveyor.cpp_FUN_004424a0 at 004424a6
;   core_course.cpp_CCourse_importBON_FUN_00442bc0 at 00442c22
;   ... and 56 more
;
; Referenced Globals:
;   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
;   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_00602790
;   crt_stdio.c_FillBufferAndGetChar_FUN_005fe910
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fe840
        ;   Label: crt_stdio.c_fgetc_FUN_005fe840
    PUSH ESI                            ; 005fe841
    PUSH EDI                            ; 005fe842
    PUSH EBP                            ; 005fe843
    MOV EBX,dword ptr [ESP + 0x14]      ; 005fe844
    MOV EDX,dword ptr [EBX + 0x10]      ; 005fe848
    PUSH EDX                            ; 005fe84b
    CALL dword ptr [0x00684ee8]         ; 005fe84c | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8
    MOV ESI,dword ptr [EBX + 0x8]       ; 005fe852
    MOV ECX,dword ptr [ESI + 0xc]       ; 005fe855
    ADD ESP,0x4                         ; 005fe858
    CMP ECX,0x1                         ; 005fe85b
    JZ 0x005fe879                       ; 005fe85e
        ;   XREF to: 005fe879 (CONDITIONAL_JUMP)  ; LAB_005fe879
    TEST ECX,ECX                        ; 005fe860
    JZ 0x005fe872                       ; 005fe862
        ;   XREF to: 005fe872 (CONDITIONAL_JUMP)  ; LAB_005fe872
    MOV EBP,dword ptr [EBX + 0x10]      ; 005fe864
    PUSH EBP                            ; 005fe867
    MOV ESI,0xffffffff                  ; 005fe868
    JMP 0x005fe8fe                      ; 005fe86d
        ;   XREF to: 005fe8fe (UNCONDITIONAL_JUMP)  ; LAB_005fe8fe
    MOV dword ptr [ESI + 0xc],0x1       ; 005fe872
        ;   Label: LAB_005fe872
    TEST byte ptr [EBX + 0xc],0x1       ; 005fe879
        ;   Label: LAB_005fe879
    JNZ 0x005fe899                      ; 005fe87d
        ;   XREF to: 005fe899 (CONDITIONAL_JUMP)  ; LAB_005fe899
    PUSH 0x4                            ; 005fe87f
    CALL crt_errno.c_setErrno_FUN_00602790 ; 005fe881
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00602790(int error_code)
    MOV DL,byte ptr [EBX + 0xc]         ; 005fe886
    MOV ESI,0xffffffff                  ; 005fe889
    OR DL,0x20                          ; 005fe88e
    ADD ESP,0x4                         ; 005fe891
    MOV byte ptr [EBX + 0xc],DL         ; 005fe894
    JMP 0x005fe8ba                      ; 005fe897
        ;   XREF to: 005fe8ba (UNCONDITIONAL_JUMP)  ; LAB_005fe8ba
    MOV EAX,dword ptr [EBX + 0x4]       ; 005fe899
        ;   Label: LAB_005fe899
    DEC EAX                             ; 005fe89c
    MOV dword ptr [EBX + 0x4],EAX       ; 005fe89d
    TEST EAX,EAX                        ; 005fe8a0
    JGE 0x005fe8b1                      ; 005fe8a2
        ;   XREF to: 005fe8b1 (CONDITIONAL_JUMP)  ; LAB_005fe8b1
    PUSH EBX                            ; 005fe8a4
    CALL crt_stdio.c_FillBufferAndGetChar_FUN_005fe910 ; 005fe8a5
        ;   XREF to: 005fe910 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_FillBufferAndGetChar_FUN_005fe910(_FILE * file)
    ADD ESP,0x4                         ; 005fe8aa
    MOV ESI,EAX                         ; 005fe8ad
    JMP 0x005fe8ba                      ; 005fe8af
        ;   XREF to: 005fe8ba (UNCONDITIONAL_JUMP)  ; LAB_005fe8ba
    MOV EAX,dword ptr [EBX]             ; 005fe8b1
        ;   Label: LAB_005fe8b1
    INC EAX                             ; 005fe8b3
    MOVZX ESI,byte ptr [EAX + -0x1]     ; 005fe8b4
    MOV dword ptr [EBX],EAX             ; 005fe8b8
    TEST byte ptr [EBX + 0xc],0x40      ; 005fe8ba
        ;   Label: LAB_005fe8ba
    JNZ 0x005fe8fa                      ; 005fe8be
        ;   XREF to: 005fe8fa (CONDITIONAL_JUMP)  ; LAB_005fe8fa
    CMP ESI,0xd                         ; 005fe8c0
    JNZ 0x005fe8e7                      ; 005fe8c3
        ;   XREF to: 005fe8e7 (CONDITIONAL_JUMP)  ; LAB_005fe8e7
    MOV ECX,dword ptr [EBX + 0x4]       ; 005fe8c5
    DEC ECX                             ; 005fe8c8
    MOV dword ptr [EBX + 0x4],ECX       ; 005fe8c9
    TEST ECX,ECX                        ; 005fe8cc
    JGE 0x005fe8dd                      ; 005fe8ce
        ;   XREF to: 005fe8dd (CONDITIONAL_JUMP)  ; LAB_005fe8dd
    PUSH EBX                            ; 005fe8d0
    CALL crt_stdio.c_FillBufferAndGetChar_FUN_005fe910 ; 005fe8d1
        ;   XREF to: 005fe910 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_FillBufferAndGetChar_FUN_005fe910(_FILE * file)
    ADD ESP,0x4                         ; 005fe8d6
    MOV ESI,EAX                         ; 005fe8d9
    JMP 0x005fe8e7                      ; 005fe8db
        ;   XREF to: 005fe8e7 (UNCONDITIONAL_JUMP)  ; LAB_005fe8e7
    MOV EAX,dword ptr [EBX]             ; 005fe8dd
        ;   Label: LAB_005fe8dd
    MOV DL,byte ptr [EAX]               ; 005fe8df
    INC EAX                             ; 005fe8e1
    MOVZX ESI,DL                        ; 005fe8e2
    MOV dword ptr [EBX],EAX             ; 005fe8e5
    CMP ESI,0x1a                        ; 005fe8e7
        ;   Label: LAB_005fe8e7
    JNZ 0x005fe8fa                      ; 005fe8ea
        ;   XREF to: 005fe8fa (CONDITIONAL_JUMP)  ; LAB_005fe8fa
    MOV CL,byte ptr [EBX + 0xc]         ; 005fe8ec
    OR CL,0x10                          ; 005fe8ef
    MOV ESI,0xffffffff                  ; 005fe8f2
    MOV byte ptr [EBX + 0xc],CL         ; 005fe8f7
    MOV EDI,dword ptr [EBX + 0x10]      ; 005fe8fa
        ;   Label: LAB_005fe8fa
    PUSH EDI                            ; 005fe8fd
    CALL dword ptr [0x00684eec]         ; 005fe8fe | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
        ;   Label: LAB_005fe8fe
    ADD ESP,0x4                         ; 005fe904
    MOV EAX,ESI                         ; 005fe907
    POP EBP                             ; 005fe909
    POP EDI                             ; 005fe90a
    POP ESI                             ; 005fe90b
    POP EBX                             ; 005fe90c
    RET                                 ; 005fe90d

