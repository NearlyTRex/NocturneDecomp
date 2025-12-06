; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_event.cpp_FUN_004aa3c0()
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; Referenced Globals:
;   TerminatedCString s_d_00624449
;   CEventList* g_CEventListPtr = 02d05310
;   CEventList g_CEventListInstance
;
; Called Functions:
;   core_event.cpp_CEventList_FUN_004b0830
;   crt_stdio.c_sscanf_FUN_0060013c
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004aa3c0
        ;   Label: core_event.cpp_FUN_004aa3c0
    MOV EAX,ESP                         ; 004aa3c3
    PUSH EAX                            ; 004aa3c5
    PUSH 0x624449                       ; 004aa3c6 | = "%d" | s_d_00624449 = %d
    MOV EDX,dword ptr [ESP + 0x10]      ; 004aa3cb
    PUSH EDX                            ; 004aa3cf
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004aa3d0 | int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004aa3d5
    CMP EAX,0x1                         ; 004aa3d8
    JNZ 0x004aa3e4                      ; 004aa3db | LAB_004aa3e4
        ;   XREF to: 004aa3e4 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP]             ; 004aa3dd
    ADD ESP,0x4                         ; 004aa3e0
    RET                                 ; 004aa3e3
    PUSH EBX                            ; 004aa3e4
        ;   Label: LAB_004aa3e4
    MOV ECX,dword ptr [ESP + 0xc]       ; 004aa3e5
    PUSH ECX                            ; 004aa3e9
    MOV EBX,dword ptr [0x006793d0]      ; 004aa3ea | CEventList g_CEventListInstance | CEventList * g_CEventListPtr
    PUSH EBX                            ; 004aa3f0 | CEventList g_CEventListInstance
    CALL core_event.cpp_CEventList_FUN_004b0830 ; 004aa3f1 | int core_event.cpp_CEventList_FUN_004b0830(CEventList * this_ptr)
        ;   XREF to: 004b0830 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004aa3f6
    POP EBX                             ; 004aa3f9
    ADD ESP,0x4                         ; 004aa3fa
    RET                                 ; 004aa3fd

