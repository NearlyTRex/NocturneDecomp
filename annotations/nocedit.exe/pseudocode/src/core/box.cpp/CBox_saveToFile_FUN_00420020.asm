; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_box_cpp_CBox_saveToFile_FUN_00420020(CBox *this_ptr,FILE *file_handle)
;
; Parameters:
; CBox *           Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   file_handle
; Local Variables:
; undefined8       Stack[-0x24]:8  local_24
; undefined8       Stack[-0x1c]:8  local_1c
; undefined8       Stack[-0x14]:8  local_14
;
; XREF[1]:
;   core_actor.cpp_serializeSimBox_FUN_0040bd70 at 0040be2c
;
; Referenced Globals:
;   TerminatedCString s_sboxVersion_0061656d
;   TerminatedCString s_s_d_0061657b
;   TerminatedCString s_sboxStateInfo_00616581
;   TerminatedCString s_s_f_f_f_00616591
;   TerminatedCString s_s_f_f_f_0061659d
;   TerminatedCString s_s_f_f_f_006165a9
;   TerminatedCString s_s_f_006165b5
;   TerminatedCString s_s_f_f_f_006165bb
;   TerminatedCString s_s_f_f_f_006165c7
;   TerminatedCString s_s_d_006165d3
;   double DOUBLE_006165df = 32
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00420020
        ;   Label: core_box.cpp_CBox_saveToFile_FUN_00420020
    PUSH ESI                            ; 00420021
    PUSH EDI                            ; 00420022
    MOV EBX,dword ptr [ESP + 0x10]      ; 00420023
    MOV ESI,dword ptr [ESP + 0x14]      ; 00420027
    MOV EDI,dword ptr [ESP + 0x18]      ; 0042002b
    PUSH EDI                            ; 0042002f
    PUSH 0x61656d                       ; 00420030 | = "%sboxVersion\n"
    PUSH ESI                            ; 00420035
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00420036
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 0042003b
    PUSH 0x1                            ; 0042003e
    PUSH EDI                            ; 00420040
    PUSH 0x61657b                       ; 00420041 | = "%s%d\n"
    PUSH ESI                            ; 00420046
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00420047
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x10                        ; 0042004c
    PUSH EDI                            ; 0042004f
    PUSH 0x616581                       ; 00420050 | = "%sboxStateInfo\n"
    PUSH ESI                            ; 00420055
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00420056
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 0042005b
    SUB ESP,0x8                         ; 0042005e
    FLD float ptr [EBX + 0x8]           ; 00420061
    FSTP double ptr [ESP]               ; 00420064
    SUB ESP,0x8                         ; 00420067
    FLD float ptr [EBX + 0x4]           ; 0042006a
    FSTP double ptr [ESP]               ; 0042006d
    SUB ESP,0x8                         ; 00420070
    FLD float ptr [EBX]                 ; 00420073
    FSTP double ptr [ESP]               ; 00420075
    PUSH EDI                            ; 00420078
    PUSH 0x616591                       ; 00420079 | = "%s%f,%f,%f\n"
    PUSH ESI                            ; 0042007e
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0042007f
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x24                        ; 00420084
    SUB ESP,0x8                         ; 00420087
    FLD float ptr [EBX + 0x10]          ; 0042008a
    FSTP double ptr [ESP]               ; 0042008d
    SUB ESP,0x8                         ; 00420090
    FLD float ptr [EBX + 0x14]          ; 00420093
    FSTP double ptr [ESP]               ; 00420096
    SUB ESP,0x8                         ; 00420099
    FLD float ptr [EBX + 0xc]           ; 0042009c
    FSTP double ptr [ESP]               ; 0042009f
    PUSH EDI                            ; 004200a2
    PUSH 0x61659d                       ; 004200a3 | = "%s%f,%f,%f\n"
    PUSH ESI                            ; 004200a8
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004200a9
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x24                        ; 004200ae
    SUB ESP,0x8                         ; 004200b1
    FLD float ptr [EBX + 0xac]          ; 004200b4
    FSTP double ptr [ESP]               ; 004200ba
    SUB ESP,0x8                         ; 004200bd
    FLD float ptr [EBX + 0xa8]          ; 004200c0
    FSTP double ptr [ESP]               ; 004200c6
    SUB ESP,0x8                         ; 004200c9
    FLD float ptr [EBX + 0xa4]          ; 004200cc
    FSTP double ptr [ESP]               ; 004200d2
    PUSH EDI                            ; 004200d5
    PUSH 0x6165a9                       ; 004200d6 | = "%s%f,%f,%f\n"
    PUSH ESI                            ; 004200db
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004200dc
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    FLD float ptr [EBX + 0x94]          ; 004200e1
    ADD ESP,0x24                        ; 004200e7
    FMUL double ptr [0x006165df]        ; 004200ea | DOUBLE_006165df
    SUB ESP,0x8                         ; 004200f0
    FSTP double ptr [ESP]               ; 004200f3
    PUSH EDI                            ; 004200f6
    PUSH 0x6165b5                       ; 004200f7 | = "%s%f\n"
    PUSH ESI                            ; 004200fc
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004200fd
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x14                        ; 00420102
    SUB ESP,0x8                         ; 00420105
    FLD float ptr [EBX + 0x54]          ; 00420108
    FSTP double ptr [ESP]               ; 0042010b
    SUB ESP,0x8                         ; 0042010e
    FLD float ptr [EBX + 0x50]          ; 00420111
    FSTP double ptr [ESP]               ; 00420114
    SUB ESP,0x8                         ; 00420117
    FLD float ptr [EBX + 0x4c]          ; 0042011a
    FSTP double ptr [ESP]               ; 0042011d
    PUSH EDI                            ; 00420120
    PUSH 0x6165bb                       ; 00420121 | = "%s%f,%f,%f\n"
    PUSH ESI                            ; 00420126
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00420127
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x24                        ; 0042012c
    SUB ESP,0x8                         ; 0042012f
    FLD float ptr [EBX + 0x78]          ; 00420132
    FSTP double ptr [ESP]               ; 00420135
    SUB ESP,0x8                         ; 00420138
    FLD float ptr [EBX + 0x74]          ; 0042013b
    FSTP double ptr [ESP]               ; 0042013e
    SUB ESP,0x8                         ; 00420141
    FLD float ptr [EBX + 0x70]          ; 00420144
    FSTP double ptr [ESP]               ; 00420147
    PUSH EDI                            ; 0042014a
    PUSH 0x6165c7                       ; 0042014b | = "%s%f,%f,%f\n"
    PUSH ESI                            ; 00420150
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00420151
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x24                        ; 00420156
    MOV EDX,dword ptr [EBX + 0x254]     ; 00420159
    PUSH EDX                            ; 0042015f
    PUSH EDI                            ; 00420160
    PUSH 0x6165d3                       ; 00420161 | = "%s%d\n"
    PUSH ESI                            ; 00420166
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00420167
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x10                        ; 0042016c
    POP EDI                             ; 0042016f
    POP ESI                             ; 00420170
    POP EBX                             ; 00420171
    RET                                 ; 00420172

