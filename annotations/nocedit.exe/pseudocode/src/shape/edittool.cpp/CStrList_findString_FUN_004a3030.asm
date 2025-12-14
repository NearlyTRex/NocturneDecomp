; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_edittool.cpp_CStrList_findString_FUN_004a3030(CStrList * this_ptr, char * search_string)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   search_string
;
; XREF[5]:
;   core_script.cpp_FUN_00562920 at 00562d60
;   core_script.cpp_FUN_005677a0 at 0056796e
;   core_sound.cpp_playSfxInternal_FUN_005b1fd0 at 005b243c
;   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 at 004b978c
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0 at 004a38a5
;
; Called Functions:
;   crt_string.c_stricmp_FUN_005fe7f0
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3030
        ;   Label: shape_edittool.cpp_CStrList_findString_FUN_004a3030
    PUSH ESI                            ; 004a3031
    PUSH EDI                            ; 004a3032
    MOV ESI,dword ptr [ESP + 0x10]      ; 004a3033
    MOV EDI,dword ptr [ESP + 0x14]      ; 004a3037
    MOV EDX,dword ptr [ESI]             ; 004a303b
    XOR EBX,EBX                         ; 004a303d
    TEST EDX,EDX                        ; 004a303f
    JLE 0x004a3060                      ; 004a3041
        ;   XREF to: 004a3060 (CONDITIONAL_JUMP)  ; LAB_004a3060
    PUSH EDI                            ; 004a3043
        ;   Label: LAB_004a3043
    PUSH EBX                            ; 004a3044
    PUSH ESI                            ; 004a3045
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004a3046
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004a304b
    PUSH EAX                            ; 004a304e
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004a304f
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a3054
    TEST EAX,EAX                        ; 004a3057
    JZ 0x004a3069                       ; 004a3059
        ;   XREF to: 004a3069 (CONDITIONAL_JUMP)  ; LAB_004a3069
    INC EBX                             ; 004a305b
    CMP EBX,dword ptr [ESI]             ; 004a305c
    JL 0x004a3043                       ; 004a305e
        ;   XREF to: 004a3043 (CONDITIONAL_JUMP)  ; LAB_004a3043
    MOV EAX,0xffffffff                  ; 004a3060
        ;   Label: LAB_004a3060
    POP EDI                             ; 004a3065
    POP ESI                             ; 004a3066
    POP EBX                             ; 004a3067
    RET                                 ; 004a3068
    MOV EAX,EBX                         ; 004a3069
        ;   Label: LAB_004a3069
    POP EDI                             ; 004a306b
    POP ESI                             ; 004a306c
    POP EBX                             ; 004a306d
    RET                                 ; 004a306e

