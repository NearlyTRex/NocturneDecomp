; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtri_cpp_CDemonTriangle_writeDataCSV_FUN_0049a530(CDemonTriangle *this_ptr,_FILE *file_handle)
;
; Parameters:
; CDemonTriangle * Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
; undefined8       Stack[-0x8]:8  local_8
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_f_f_f_f_f_f_00622dde
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0049a530
        ;   Label: core_dtri.cpp_CDemonTriangle_writeDataCSV_FUN_0049a530
    SUB ESP,0x8                         ; 0049a534
    FLD float ptr [EAX + 0x20]          ; 0049a537
    FSTP double ptr [ESP]               ; 0049a53a
    SUB ESP,0x8                         ; 0049a53d
    FLD float ptr [EAX + 0x1c]          ; 0049a540
    FSTP double ptr [ESP]               ; 0049a543
    SUB ESP,0x8                         ; 0049a546
    FLD float ptr [EAX + 0x18]          ; 0049a549
    FSTP double ptr [ESP]               ; 0049a54c
    SUB ESP,0x8                         ; 0049a54f
    FLD float ptr [EAX + 0x14]          ; 0049a552
    FSTP double ptr [ESP]               ; 0049a555
    SUB ESP,0x8                         ; 0049a558
    FLD float ptr [EAX + 0x10]          ; 0049a55b
    FSTP double ptr [ESP]               ; 0049a55e
    SUB ESP,0x8                         ; 0049a561
    FLD float ptr [EAX + 0xc]           ; 0049a564
    FSTP double ptr [ESP]               ; 0049a567
    SUB ESP,0x8                         ; 0049a56a
    FLD float ptr [EAX + 0x8]           ; 0049a56d
    FSTP double ptr [ESP]               ; 0049a570
    SUB ESP,0x8                         ; 0049a573
    FLD float ptr [EAX + 0x4]           ; 0049a576
    FSTP double ptr [ESP]               ; 0049a579
    SUB ESP,0x8                         ; 0049a57c
    FLD float ptr [EAX]                 ; 0049a57f
    FSTP double ptr [ESP]               ; 0049a581
    PUSH 0x622dde                       ; 0049a584 | = "%f,%f,%f,%f,%f,%f,%f,%f,%f\n"
    MOV EDX,dword ptr [ESP + 0x54]      ; 0049a589
    PUSH EDX                            ; 0049a58d
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0049a58e
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x50                        ; 0049a593
    RET                                 ; 0049a596

