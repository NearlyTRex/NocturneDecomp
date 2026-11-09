; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtri_cpp_CDemonTriangle_writeDataCSV_FUN_004787f0(CDemonTriangle *this_ptr,_FILE *file_handle)
;
; Parameters:
; CDemonTriangle * Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; Called Functions:
;   crt_unknown.c_FUN_005a3140
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004787f0
        ;   Label: core_dtri.cpp_CDemonTriangle_writeDataCSV_FUN_004787f0
    SUB ESP,0x8                         ; 004787f4
    FLD float ptr [EAX + 0x20]          ; 004787f7
    FSTP double ptr [ESP]               ; 004787fa
    SUB ESP,0x8                         ; 004787fd
    FLD float ptr [EAX + 0x1c]          ; 00478800
    FSTP double ptr [ESP]               ; 00478803
    SUB ESP,0x8                         ; 00478806
    FLD float ptr [EAX + 0x18]          ; 00478809
    FSTP double ptr [ESP]               ; 0047880c
    SUB ESP,0x8                         ; 0047880f
    FLD float ptr [EAX + 0x14]          ; 00478812
    FSTP double ptr [ESP]               ; 00478815
    SUB ESP,0x8                         ; 00478818
    FLD float ptr [EAX + 0x10]          ; 0047881b
    FSTP double ptr [ESP]               ; 0047881e
    SUB ESP,0x8                         ; 00478821
    FLD float ptr [EAX + 0xc]           ; 00478824
    FSTP double ptr [ESP]               ; 00478827
    SUB ESP,0x8                         ; 0047882a
    FLD float ptr [EAX + 0x8]           ; 0047882d
    FSTP double ptr [ESP]               ; 00478830
    SUB ESP,0x8                         ; 00478833
    FLD float ptr [EAX + 0x4]           ; 00478836
    FSTP double ptr [ESP]               ; 00478839
    SUB ESP,0x8                         ; 0047883c
    FLD float ptr [EAX]                 ; 0047883f
    FSTP double ptr [ESP]               ; 00478841
    PUSH 0x5bcc6d                       ; 00478844
    MOV EDX,dword ptr [ESP + 0x54]      ; 00478849
    PUSH EDX                            ; 0047884d
    CALL crt_unknown.c_FUN_005a3140     ; 0047884e
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x50                        ; 00478853
    RET                                 ; 00478856

