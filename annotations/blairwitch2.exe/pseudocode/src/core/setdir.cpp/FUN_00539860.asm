; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_setdir_cpp_FUN_00539860(CDemonSet *param_1,char *param_2)
;
;
; XREF[1]:
;   core_set.cpp_CDemonSet_load_FUN_0052c0e0 at 0052cc32
;
; Referenced Globals:
;   undefined4 DAT_005e601d
;   undefined4 DAT_005e6020
;
; Called Functions:
;   core_setdir.cpp_CDemonSet_saveThumbsNoFile_FUN_00539d50
;   core_setdir.cpp_CDemonSet_writeThumbs_FUN_00539c30
;   core_setdir.cpp_FUN_005398d0
;   crt_stdio.c_fclose_FUN_005b89c0
;   engine_dosio.cpp_FUN_00460c70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00539860
        ;   Label: core_setdir.cpp_FUN_00539860
    PUSH ESI                            ; 00539861
    MOV ESI,dword ptr [ESP + 0xc]       ; 00539862
    PUSH 0x5e601d                       ; 00539866 | DAT_005e601d
    MOV EDX,dword ptr [ESP + 0x14]      ; 0053986b
    PUSH EDX                            ; 0053986f
    PUSH 0x5e6020                       ; 00539870 | DAT_005e6020
    CALL engine_dosio.cpp_FUN_00460c70  ; 00539875
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    MOV EBX,EAX                         ; 0053987a
    ADD ESP,0xc                         ; 0053987c
    TEST EAX,EAX                        ; 0053987f
    JNZ 0x0053989d                      ; 00539881
        ;   XREF to: 0053989d (CONDITIONAL_JUMP)  ; LAB_0053989d
    PUSH ESI                            ; 00539883
    CALL core_setdir.cpp_CDemonSet_saveThumbsNoFile_FUN_00539d50 ; 00539884
        ;   XREF to: 00539d50 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_saveThumbsNoFile_FUN_00539d50(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00539889
    MOV ECX,dword ptr [ESP + 0x10]      ; 0053988c
    PUSH ECX                            ; 00539890
    PUSH ESI                            ; 00539891
    CALL core_setdir.cpp_CDemonSet_writeThumbs_FUN_00539c30 ; 00539892
        ;   XREF to: 00539c30 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_writeThumbs_FUN_00539c30(CDemonSet * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00539897
    POP ESI                             ; 0053989a
    POP EBX                             ; 0053989b
    RET                                 ; 0053989c
    PUSH EAX                            ; 0053989d
        ;   Label: LAB_0053989d
    PUSH ESI                            ; 0053989e
    CALL core_setdir.cpp_FUN_005398d0   ; 0053989f
        ;   XREF to: 005398d0 (UNCONDITIONAL_CALL)  ; undefined core_setdir.cpp_FUN_005398d0()
    ADD ESP,0x8                         ; 005398a4
    PUSH EBX                            ; 005398a7
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 005398a8
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 005398ad
    POP ESI                             ; 005398b0
    POP EBX                             ; 005398b1
    RET                                 ; 005398b2

