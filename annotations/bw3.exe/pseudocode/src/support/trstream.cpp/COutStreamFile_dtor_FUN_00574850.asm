; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; COutStreamFile * __cdecl support_trstream_cpp_COutStreamFile_dtor_FUN_00574850(COutStreamFile *this_ptr,uint flags)
;
; Parameters:
; COutStreamFile * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[5]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_0044f750 at 0044fd26
;   core_game.cpp_FUN_004bda10 at 004bde33
;   core_game.cpp_FUN_004bdfb0 at 004be3b5
;   engine_2d.c_loadOrBuildColorMap_FUN_00402940 at 00402a77
;   support_codec.cpp_FUN_00440a70 at 00440b06
;
; Referenced Globals:
;   WatcomTypeInfo g_COutStreamFileTypeInfo
;   undefined1* g_COutStreamFileVTable = 00574850
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;   support_trstream.cpp_COutStream_dtor_FUN_005744a0
;   support_trstream.cpp_COutStreamFile_close_FUN_005749a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574850
        ;   Label: support_trstream.cpp_COutStreamFile_dtor_FUN_00574850
    MOV EBX,dword ptr [ESP + 0x8]       ; 00574851
    TEST byte ptr [ESP + 0xc],0x4       ; 00574855
    JNZ 0x00574885                      ; 0057485a
        ;   XREF to: 00574885 (CONDITIONAL_JUMP)  ; LAB_00574885
    PUSH EBX                            ; 0057485c
    MOV dword ptr [EBX],0x5e5b24        ; 0057485d | g_COutStreamFileVTable
    CALL support_trstream.cpp_COutStreamFile_close_FUN_005749a0 ; 00574863
        ;   XREF to: 005749a0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_COutStreamFile_close_FUN_005749a0(COutStreamFile * this_ptr)
    ADD ESP,0x4                         ; 00574868
    PUSH 0x1                            ; 0057486b
    PUSH EBX                            ; 0057486d
    CALL support_trstream.cpp_COutStream_dtor_FUN_005744a0 ; 0057486e
        ;   XREF to: 005744a0 (UNCONDITIONAL_CALL)  ; COutStream * support_trstream.cpp_COutStream_dtor_FUN_005744a0(COutStream * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00574873
    MOV DL,byte ptr [ESP + 0xc]         ; 00574876
    MOV EBX,EAX                         ; 0057487a
    TEST DL,0x2                         ; 0057487c
    JNZ 0x005748a0                      ; 0057487f
        ;   XREF to: 005748a0 (CONDITIONAL_JUMP)  ; LAB_005748a0
    MOV EAX,EBX                         ; 00574881
    POP EBX                             ; 00574883
    RET                                 ; 00574884
    PUSH 0x5dafb0                       ; 00574885 | g_COutStreamFileTypeInfo
        ;   Label: LAB_00574885
    PUSH EBX                            ; 0057488a
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 0057488b
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00574890
    PUSH EAX                            ; 00574893
    CALL crt_unknown.c_FUN_005a30b6     ; 00574894
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00574899
    MOV EAX,EBX                         ; 0057489c
    POP EBX                             ; 0057489e
    RET                                 ; 0057489f
    PUSH EAX                            ; 005748a0
        ;   Label: LAB_005748a0
    CALL crt_unknown.c_FUN_005a30c4     ; 005748a1
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 005748a6
    MOV EAX,EBX                         ; 005748a9
    POP EBX                             ; 005748ab
    RET                                 ; 005748ac

