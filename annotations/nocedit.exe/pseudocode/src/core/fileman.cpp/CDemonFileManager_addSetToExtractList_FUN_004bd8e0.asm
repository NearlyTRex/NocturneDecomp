; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fileman_cpp_CDemonFileManager_addSetToExtractList_FUN_004bd8e0(CDemonFileManager *this_ptr,char *set_filename)
;
; Parameters:
; CDemonFileManager * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   set_filename
;
; XREF[2]:
;   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 at 004bdfdf
;   core_fileman.cpp_CDemonFileManager_moveSetIntoPod_FUN_004bd930 at 004bd97c
;
; Referenced Globals:
;   TerminatedCString s_models_s_00629597
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_set.cpp_CDemonSet_load_FUN_00569410
;   core_setedit.cpp_CDemonSet_writeFileDependencies_FUN_00584e70
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bd8e0
        ;   Label: core_fileman.cpp_CDemonFileManager_addSetToExtractList_FUN_004bd8e0
    PUSH ESI                            ; 004bd8e1
    PUSH EDI                            ; 004bd8e2
    PUSH EBP                            ; 004bd8e3
    MOV EDX,dword ptr [ESP + 0x18]      ; 004bd8e4
    PUSH EDX                            ; 004bd8e8
    MOV EAX,dword ptr [ESP + 0x18]      ; 004bd8e9
    PUSH 0x629597                       ; 004bd8ed | = "models\\%s\n"
    MOV ECX,dword ptr [EAX]             ; 004bd8f2
    PUSH ECX                            ; 004bd8f4
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004bd8f5
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004bd8fa
    MOV EBX,dword ptr [ESP + 0x18]      ; 004bd8fd
    PUSH EBX                            ; 004bd901
    MOV ESI,dword ptr [0x006810c8]      ; 004bd902 | g_CDemonSetPtr
    PUSH ESI                            ; 004bd908 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_load_FUN_00569410 ; 004bd909
        ;   XREF to: 00569410 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_load_FUN_00569410(CDemonSet * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004bd90e
    MOV EAX,dword ptr [ESP + 0x14]      ; 004bd911
    MOV EDI,dword ptr [EAX]             ; 004bd915
    PUSH EDI                            ; 004bd917
    MOV EBP,dword ptr [0x006810c8]      ; 004bd918 | g_CDemonSetPtr
    PUSH EBP                            ; 004bd91e | g_CDemonSetInstance
    CALL core_setedit.cpp_CDemonSet_writeFileDependencies_FUN_00584e70 ; 004bd91f
        ;   XREF to: 00584e70 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_CDemonSet_writeFileDependencies_FUN_00584e70(CDemonSet * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004bd924
    POP EBP                             ; 004bd927
    POP EDI                             ; 004bd928
    POP ESI                             ; 004bd929
    POP EBX                             ; 004bd92a
    RET                                 ; 004bd92b

