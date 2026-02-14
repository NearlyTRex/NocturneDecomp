; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_ckptutil_c_loadSingleEdgeList_FUN_00433440(char *filename,void **edge_data_out,int *edge_count_out)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; void * *         Stack[0x8]:4   edge_data_out
; int *            Stack[0xc]:4   edge_count_out
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; Called Functions:
;   cockpit_ckptutil.c_loadEdgeListFile_FUN_004331f0
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00433440
        ;   Label: cockpit_ckptutil.c_loadSingleEdgeList_FUN_00433440
    PUSH 0x1                            ; 00433443
    LEA EAX,[ESP + 0x4]                 ; 00433445
    PUSH EAX                            ; 00433449
    MOV ECX,dword ptr [ESP + 0x14]      ; 0043344a
    XOR EDX,EDX                         ; 0043344e
    PUSH ECX                            ; 00433450
    MOV dword ptr [ESP + 0xc],EDX       ; 00433451
    CALL cockpit_ckptutil.c_loadEdgeListFile_FUN_004331f0 ; 00433455
        ;   XREF to: 004331f0 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_loadEdgeListFile_FUN_004331f0(char * filename, SEdgeList * edge_lists, int expected_count)
    ADD ESP,0xc                         ; 0043345a
    MOV EDX,dword ptr [ESP + 0x10]      ; 0043345d
    MOV EAX,dword ptr [ESP]             ; 00433461
    MOV dword ptr [EDX],EAX             ; 00433464
    MOV EDX,dword ptr [ESP + 0x14]      ; 00433466
    MOV EAX,dword ptr [ESP + 0x4]       ; 0043346a
    MOV dword ptr [EDX],EAX             ; 0043346e
    ADD ESP,0x8                         ; 00433470
    RET                                 ; 00433473

