; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setdir_cpp_CDemonSet_saveThumbs_FUN_00575bc0(CDemonSet *this_ptr,_FILE *file_handle)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; CVector3f        Stack[-0x5c]:12  CStack_5c
; CVector3f        Stack[-0x50]:12  CStack_50
; CVector3f        Stack[-0x44]:12  CStack_44
; CVector3f        Stack[-0x38]:12  CStack_38
; CVector3f        Stack[-0x2c]:12  CStack_2c
; CVector3f        Stack[-0x20]:12  CStack_20
; CVector3f        Stack[-0x14]:12  CStack_14
;
; XREF[2]:
;   core_setdir.cpp_CDemonSet_refreshThumbs_FUN_00575b40 at 00575b7f
;   core_setdir.cpp_CDemonSet_saveThumbs_FUN_00575f60 at 00575f67
;
; Referenced Globals:
;   void* switchdataD_00575ba0 = 00575c00
;   undefined4 caseD_0
;   undefined4 caseD_1
;   undefined4 caseD_2
;   undefined4 caseD_3
;   undefined4 caseD_4
;   undefined4 caseD_5
;
; Called Functions:
;   core_setdir.cpp_CDemonSet_freeThumbs_FUN_00575df0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00575bc0
        ;   Label: core_setdir.cpp_CDemonSet_saveThumbs_FUN_00575bc0
    PUSH EBP                            ; 00575bc1
    SUB ESP,0x54                        ; 00575bc2
    MOV EBP,dword ptr [ESP + 0x60]      ; 00575bc5
    PUSH EBP                            ; 00575bc9
    CALL core_setdir.cpp_CDemonSet_freeThumbs_FUN_00575df0 ; 00575bca
        ;   XREF to: 00575df0 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_freeThumbs_FUN_00575df0(CDemonSet * this_ptr)
    XOR EBX,EBX                         ; 00575bcf
    ADD ESP,0x4                         ; 00575bd1
    CMP EBX,dword ptr [EBP]             ; 00575bd4
        ;   Label: LAB_00575bd4
    JGE 0x00575de7                      ; 00575bd7
        ;   XREF to: 00575de7 (CONDITIONAL_JUMP)  ; LAB_00575de7
    PUSH EDI                            ; 00575bdd
    PUSH ESI                            ; 00575bde
    IMUL EDI,EBX,0x1a4                  ; 00575bdf
    LEA EAX,[EBP + 0x4]                 ; 00575be5
    ADD EDI,EAX                         ; 00575be8
    CMP dword ptr [EDI + 0x140],0x0     ; 00575bea
    JZ 0x00575d9c                       ; 00575bf1
        ;   XREF to: 00575d9c (CONDITIONAL_JUMP)  ; LAB_00575d9c
    XOR ESI,ESI                         ; 00575bf7
    JMP dword ptr [ESI*0x4 + 0x575ba0]  ; 00575bf9 | default | caseD_1 | caseD_2
        ;   Label: switchD

