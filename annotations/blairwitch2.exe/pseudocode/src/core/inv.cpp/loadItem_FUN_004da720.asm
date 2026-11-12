; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_inv_cpp_loadItem_FUN_004da720(SInventoryItemInfo *item_info,_FILE *file_handle)
;
; Parameters:
; SInventoryItemInfo * Stack[0x4]:4   item_info
; _FILE *          Stack[0x8]:4   file_handle
;
; XREF[1]:
;   core_inv.cpp_loadAssets_FUN_004da990 at 004dac71
;
; Referenced Globals:
;   TerminatedCString s_anon_005db3fa
;
; Called Functions:
;   crt_stdio.c_fscanf_FUN_005b8100
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004da720
        ;   Label: core_inv.cpp_loadItem_FUN_004da720
    LEA EAX,[EDX + 0x200]               ; 004da724
    PUSH EAX                            ; 004da72a
    LEA EAX,[EDX + 0x100]               ; 004da72b
    PUSH EAX                            ; 004da731
    PUSH EDX                            ; 004da732
    PUSH 0x5db3fa                       ; 004da733 | = "\"%[^\"]\", \"%[^\"]\", \"%[^\"]\"\n"
    MOV EDX,dword ptr [ESP + 0x18]      ; 004da738
    PUSH EDX                            ; 004da73c
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 004da73d
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x14                        ; 004da742
    CMP EAX,0x3                         ; 004da745
    SETZ AL                             ; 004da748
    AND EAX,0xff                        ; 004da74b
    RET                                 ; 004da750

