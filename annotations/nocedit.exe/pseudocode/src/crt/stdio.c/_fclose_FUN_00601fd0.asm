; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c__fclose_FUN_00601fd0(_FILE *file_handle,int force_close_flag)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file_handle
; int              Stack[0x8]:4   force_close_flag
;
; XREF[1]:
;   crt_stdio.c___CClose_FUN_00601ee4 at 00601eef
;
; Referenced Globals:
;   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
;   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
;   INVALIDATE_HANDLE_FUNC* PTR_crt_sync.c_InvalidateHandle_FUN_00602448_00684ef4 = 00602448
;
; Called Functions:
;   crt_io.c__tempnam_FUN_00601f1c
;   crt_io.c_close_FUN_00609bd0
;   crt_io.c_invalidate_handle_wrapper_FUN_00602448
;   crt_memory.c_free_FUN_00601cd0
;   crt_stdio.c_ftell_FUN_00601560
;   crt_stdio.c_lseek_FUN_00606690
;   crt_stdio.c_remove_FUN_005ff9d0
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00601fd0
        ;   Label: crt_stdio.c__fclose_FUN_00601fd0
    PUSH ESI                            ; 00601fd1
    PUSH EDI                            ; 00601fd2
    PUSH EBP                            ; 00601fd3
    SUB ESP,0x114                       ; 00601fd4
    MOV EBX,dword ptr [ESP + 0x128]     ; 00601fda
    CMP dword ptr [EBX + 0xc],0x0       ; 00601fe1
    JNZ 0x00601ff1                      ; 00601fe5
        ;   XREF to: 00601ff1 (CONDITIONAL_JUMP)  ; LAB_00601ff1
    MOV EAX,0xffffffff                  ; 00601fe7
    JMP 0x006020b7                      ; 00601fec
        ;   XREF to: 006020b7 (UNCONDITIONAL_JUMP)  ; LAB_006020b7
    MOV AH,byte ptr [EBX + 0xd]         ; 00601ff1
        ;   Label: LAB_00601ff1
    XOR ESI,ESI                         ; 00601ff4
    TEST AH,0x10                        ; 00601ff6
    JZ 0x00602006                       ; 00601ff9
        ;   XREF to: 00602006 (CONDITIONAL_JUMP)  ; LAB_00602006
    PUSH EBX                            ; 00601ffb
    CALL 0x006039d0                     ; 00601ffc
        ;   XREF to: 006039d0 (UNCONDITIONAL_CALL)  ; LAB_006039ce+2
    ADD ESP,0x4                         ; 00602001
    MOV ESI,EAX                         ; 00602004
    MOV ECX,dword ptr [EBX + 0x10]      ; 00602006
        ;   Label: LAB_00602006
    PUSH ECX                            ; 00602009
    CALL dword ptr [0x00684ee8]         ; 0060200a | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8
    ADD ESP,0x4                         ; 00602010
    PUSH EBX                            ; 00602013
    CALL crt_stdio.c_ftell_FUN_00601560 ; 00602014
        ;   XREF to: 00601560 (UNCONDITIONAL_CALL)  ; long crt_stdio.c_ftell_FUN_00601560(_FILE * file_handle)
    ADD ESP,0x4                         ; 00602019
    CMP EAX,-0x1                        ; 0060201c
    JZ 0x00602030                       ; 0060201f
        ;   XREF to: 00602030 (CONDITIONAL_JUMP)  ; LAB_00602030
    PUSH 0x0                            ; 00602021
    PUSH EAX                            ; 00602023
    MOV EDI,dword ptr [EBX + 0x10]      ; 00602024
    PUSH EDI                            ; 00602027
    CALL crt_stdio.c_lseek_FUN_00606690 ; 00602028
        ;   XREF to: 00606690 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_lseek_FUN_00606690(int file_handle_index, long distance_to_move, int move_method)
    ADD ESP,0xc                         ; 0060202d
    CMP dword ptr [ESP + 0x12c],0x0     ; 00602030
        ;   Label: LAB_00602030
    JZ 0x00602048                       ; 00602038
        ;   XREF to: 00602048 (CONDITIONAL_JUMP)  ; LAB_00602048
    MOV EAX,dword ptr [EBX + 0x10]      ; 0060203a
    PUSH EAX                            ; 0060203d
    CALL crt_io.c_close_FUN_00609bd0    ; 0060203e
        ;   XREF to: 00609bd0 (UNCONDITIONAL_CALL)  ; int crt_io.c_close_FUN_00609bd0(int fd)
    ADD ESP,0x4                         ; 00602043
    OR ESI,EAX                          ; 00602046
    TEST byte ptr [EBX + 0xc],0x8       ; 00602048
        ;   Label: LAB_00602048
    JZ 0x00602067                       ; 0060204c
        ;   XREF to: 00602067 (CONDITIONAL_JUMP)  ; LAB_00602067
    MOV EAX,dword ptr [EBX + 0x8]       ; 0060204e
    MOV EDX,dword ptr [EAX + 0x8]       ; 00602051
    PUSH EDX                            ; 00602054
    CALL crt_memory.c_free_FUN_00601cd0 ; 00602055
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    MOV EAX,dword ptr [EBX + 0x8]       ; 0060205a
    ADD ESP,0x4                         ; 0060205d
    MOV dword ptr [EAX + 0x8],0x0       ; 00602060
    TEST byte ptr [EBX + 0xd],0x8       ; 00602067
        ;   Label: LAB_00602067
    JZ 0x00602091                       ; 0060206b
        ;   XREF to: 00602091 (CONDITIONAL_JUMP)  ; LAB_00602091
    MOV EAX,dword ptr [EBX + 0x8]       ; 0060206d
    MOV AL,byte ptr [EAX + 0x14]        ; 00602070
    AND EAX,0xff                        ; 00602073
    PUSH EAX                            ; 00602078
    LEA EAX,[ESP + 0x4]                 ; 00602079
    PUSH EAX                            ; 0060207d
    CALL crt_io.c__tempnam_FUN_00601f1c ; 0060207e
        ;   XREF to: 00601f1c (UNCONDITIONAL_CALL)  ; void crt_io.c__tempnam_FUN_00601f1c(char * buffer, int file_handle)
    ADD ESP,0x8                         ; 00602083
    MOV EAX,ESP                         ; 00602086
    PUSH EAX                            ; 00602088
    CALL crt_stdio.c_remove_FUN_005ff9d0 ; 00602089
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_remove_FUN_005ff9d0(char * filename)
    ADD ESP,0x4                         ; 0060208e
    MOV ECX,dword ptr [EBX + 0x10]      ; 00602091
        ;   Label: LAB_00602091
    PUSH ECX                            ; 00602094
    CALL dword ptr [0x00684eec]         ; 00602095 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 0060209b
    CMP dword ptr [ESP + 0x12c],0x0     ; 0060209e
    JZ 0x006020b5                       ; 006020a6
        ;   XREF to: 006020b5 (CONDITIONAL_JUMP)  ; LAB_006020b5
    MOV EBP,dword ptr [EBX + 0x10]      ; 006020a8
    PUSH EBP                            ; 006020ab
    CALL dword ptr [0x00684ef4]         ; 006020ac | PTR_crt_sync.c_InvalidateHandle_FUN_00602448_00684ef4
    ADD ESP,0x4                         ; 006020b2
    MOV EAX,ESI                         ; 006020b5
        ;   Label: LAB_006020b5
    ADD ESP,0x114                       ; 006020b7
        ;   Label: LAB_006020b7
    POP EBP                             ; 006020bd
    POP EDI                             ; 006020be
    POP ESI                             ; 006020bf
    POP EBX                             ; 006020c0
    RET                                 ; 006020c1

