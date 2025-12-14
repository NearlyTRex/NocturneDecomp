; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_inv.cpp_loadItem_FUN_004fcfe0(SInventoryItemInfo * item_info, FILE * file_handle)
;
; Parameters:
; SInventoryItemInfo * Stack[0x4]:4   item_info
; FILE *           Stack[0x8]:4   file_handle
;
; XREF[1]:
;   core_inv.cpp_loadInventory_FUN_004fd220 at 004fd4a9
;
; Referenced Globals:
;   TerminatedCString s_anon_00630399
;
; Called Functions:
;   crt_stdio.c_fscanf_FUN_005fe7c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004fcfe0
        ;   Label: core_inv.cpp_loadItem_FUN_004fcfe0
    LEA EAX,[EDX + 0x200]               ; 004fcfe4
    PUSH EAX                            ; 004fcfea
    LEA EAX,[EDX + 0x100]               ; 004fcfeb
    PUSH EAX                            ; 004fcff1
    PUSH EDX                            ; 004fcff2
    PUSH 0x630399                       ; 004fcff3 | = "\"%[^\"]\", \"%[^\"]\", \"%[^\"]\"\n"
    MOV EDX,dword ptr [ESP + 0x18]      ; 004fcff8
    PUSH EDX                            ; 004fcffc
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004fcffd
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x14                        ; 004fd002
    CMP EAX,0x3                         ; 004fd005
    SETZ AL                             ; 004fd008
    AND EAX,0xff                        ; 004fd00b
    RET                                 ; 004fd010

