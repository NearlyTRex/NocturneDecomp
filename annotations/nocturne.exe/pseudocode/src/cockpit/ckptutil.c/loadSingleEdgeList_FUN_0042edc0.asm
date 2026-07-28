; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_loadSingleEdgeList_FUN_0042edc0(void)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; Called Functions:
;   cockpit_ckptutil.c_loadEdgeListFile_FUN_0042eb90
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0042edc0
        ;   Label: cockpit_ckptutil.c_loadSingleEdgeList_FUN_0042edc0
    PUSH 0x1                            ; 0042edc3
    LEA EAX,[ESP + 0x4]                 ; 0042edc5
    PUSH EAX                            ; 0042edc9
    MOV ECX,dword ptr [ESP + 0x14]      ; 0042edca
    XOR EDX,EDX                         ; 0042edce
    PUSH ECX                            ; 0042edd0
    MOV dword ptr [ESP + 0xc],EDX       ; 0042edd1
    CALL cockpit_ckptutil.c_loadEdgeListFile_FUN_0042eb90 ; 0042edd5
        ;   XREF to: 0042eb90 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_loadEdgeListFile_FUN_0042eb90(char * filename, SEdgeList * edge_lists, int expected_count)
    ADD ESP,0xc                         ; 0042edda
    MOV EDX,dword ptr [ESP + 0x10]      ; 0042eddd
    MOV EAX,dword ptr [ESP]             ; 0042ede1
    MOV dword ptr [EDX],EAX             ; 0042ede4
    MOV EDX,dword ptr [ESP + 0x14]      ; 0042ede6
    MOV EAX,dword ptr [ESP + 0x4]       ; 0042edea
    MOV dword ptr [EDX],EAX             ; 0042edee
    ADD ESP,0x8                         ; 0042edf0
    RET                                 ; 0042edf3

