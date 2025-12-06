; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_ckptutil.c_copyBitmapRegion_FUN_00432860(void * src_buffer, int src_stride, void * dest_buffer, int copy_width, int copy_height, int src_x, int src_y)
;
; Parameters:
; void *           Stack[0x4]:4   src_buffer
; int              Stack[0x8]:4   src_stride
; void *           Stack[0xc]:4   dest_buffer
; int              Stack[0x10]:4   copy_width
; int              Stack[0x14]:4   copy_height
; int              Stack[0x18]:4   src_x
; int              Stack[0x1c]:4   src_y
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Called Functions:
;   cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_00431780
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00432860
        ;   Label: cockpit_ckptutil.c_copyBitmapRegion_FUN_00432860
    PUSH ESI                            ; 00432861
    PUSH EDI                            ; 00432862
    PUSH EBP                            ; 00432863
    SUB ESP,0x4                         ; 00432864
    MOV EBX,dword ptr [ESP + 0x18]      ; 00432867
    MOV EDI,dword ptr [ESP + 0x24]      ; 0043286b
    MOV EBP,dword ptr [ESP + 0x28]      ; 0043286f
    TEST EDI,EDI                        ; 00432873
    JZ 0x00432880                       ; 00432875 | LAB_00432880
        ;   XREF to: 00432880 (CONDITIONAL_JUMP)
    TEST EBX,EBX                        ; 00432877
    JNZ 0x00432888                      ; 00432879 | LAB_00432888
        ;   XREF to: 00432888 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 0043287b
    MOV ECX,ECX                         ; 0043287e
    ADD ESP,0x4                         ; 00432880
        ;   Label: LAB_00432880
    POP EBP                             ; 00432883
    POP EDI                             ; 00432884
    POP ESI                             ; 00432885
    POP EBX                             ; 00432886
    RET                                 ; 00432887
    CALL cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_00431780 ; 00432888 | OptimizedMemcpyFunc * cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_00431780()
        ;   Label: LAB_00432888
        ;   XREF to: 00431780 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0043288d
    MOV dword ptr [ESP],EAX             ; 00432891
    MOV EAX,dword ptr [ESP + 0x34]      ; 00432894
    IMUL EAX,EDX                        ; 00432898
    ADD EAX,dword ptr [ESP + 0x30]      ; 0043289b
    ADD EBX,EAX                         ; 0043289f
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004328a1
    XOR ESI,ESI                         ; 004328a5
    TEST EAX,EAX                        ; 004328a7
    JLE 0x00432880                      ; 004328a9 | LAB_00432880
        ;   XREF to: 00432880 (CONDITIONAL_JUMP)
    PUSH EBP                            ; 004328ab
        ;   Label: LAB_004328ab
    PUSH EDI                            ; 004328ac
    PUSH EBX                            ; 004328ad
    INC ESI                             ; 004328ae
    CALL dword ptr [ESP + 0xc]          ; 004328af
    ADD ESP,0xc                         ; 004328b3
    ADD EDI,EBP                         ; 004328b6
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004328b8
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004328bc
    ADD EBX,EDX                         ; 004328c0
    CMP ESI,ECX                         ; 004328c2
    JL 0x004328ab                       ; 004328c4 | LAB_004328ab
        ;   XREF to: 004328ab (CONDITIONAL_JUMP)
    ADD ESP,0x4                         ; 004328c6
    POP EBP                             ; 004328c9
    POP EDI                             ; 004328ca
    POP ESI                             ; 004328cb
    POP EBX                             ; 004328cc
    RET                                 ; 004328cd

