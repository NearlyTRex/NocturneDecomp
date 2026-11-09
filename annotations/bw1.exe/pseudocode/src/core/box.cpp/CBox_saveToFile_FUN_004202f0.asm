; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_box_cpp_CBox_saveToFile_FUN_004202f0(CBox *this_ptr,_FILE *file_handle,char *indent_prefix)
;
; Parameters:
; CBox *           Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; char *           Stack[0xc]:4   indent_prefix
; Local Variables:
; undefined8       Stack[-0x24]:8  local_24
; undefined8       Stack[-0x1c]:8  local_1c
; undefined8       Stack[-0x14]:8  local_14
;
; XREF[1]:
;   core_actor.cpp_FUN_0040bbf0 at 0040bcac
;
; Referenced Globals:
;   TerminatedCString s_sboxVersion_005d4b46
;   TerminatedCString s_s_d_005d4b54
;   TerminatedCString s_sboxStateInfo_005d4b5a
;   TerminatedCString s_s_f_f_f_005d4b6a
;   TerminatedCString s_s_f_f_f_005d4b76
;   TerminatedCString s_s_f_f_f_005d4b82
;   TerminatedCString s_s_f_005d4b8e
;   TerminatedCString s_s_f_f_f_005d4b94
;   TerminatedCString s_s_f_f_f_005d4ba0
;   TerminatedCString s_s_d_005d4bac
;   undefined4 DAT_005d4bb8
;
; Called Functions:
;   crt_unknown.c_FUN_005c03c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004202f0
        ;   Label: core_box.cpp_CBox_saveToFile_FUN_004202f0
    PUSH ESI                            ; 004202f1
    PUSH EDI                            ; 004202f2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004202f3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004202f7
    MOV EDI,dword ptr [ESP + 0x18]      ; 004202fb
    PUSH EDI                            ; 004202ff
    PUSH 0x5d4b46                       ; 00420300 | = "%sboxVersion\n"
    PUSH ESI                            ; 00420305
    CALL crt_unknown.c_FUN_005c03c0     ; 00420306
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 0042030b
    PUSH 0x1                            ; 0042030e
    PUSH EDI                            ; 00420310
    PUSH 0x5d4b54                       ; 00420311 | = "%s%d\n"
    PUSH ESI                            ; 00420316
    CALL crt_unknown.c_FUN_005c03c0     ; 00420317
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x10                        ; 0042031c
    PUSH EDI                            ; 0042031f
    PUSH 0x5d4b5a                       ; 00420320 | = "%sboxStateInfo\n"
    PUSH ESI                            ; 00420325
    CALL crt_unknown.c_FUN_005c03c0     ; 00420326
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 0042032b
    SUB ESP,0x8                         ; 0042032e
    FLD float ptr [EBX + 0x8]           ; 00420331
    FSTP double ptr [ESP]               ; 00420334
    SUB ESP,0x8                         ; 00420337
    FLD float ptr [EBX + 0x4]           ; 0042033a
    FSTP double ptr [ESP]               ; 0042033d
    SUB ESP,0x8                         ; 00420340
    FLD float ptr [EBX]                 ; 00420343
    FSTP double ptr [ESP]               ; 00420345
    PUSH EDI                            ; 00420348
    PUSH 0x5d4b6a                       ; 00420349 | = "%s%f,%f,%f\n"
    PUSH ESI                            ; 0042034e
    CALL crt_unknown.c_FUN_005c03c0     ; 0042034f
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x24                        ; 00420354
    SUB ESP,0x8                         ; 00420357
    FLD float ptr [EBX + 0x10]          ; 0042035a
    FSTP double ptr [ESP]               ; 0042035d
    SUB ESP,0x8                         ; 00420360
    FLD float ptr [EBX + 0x14]          ; 00420363
    FSTP double ptr [ESP]               ; 00420366
    SUB ESP,0x8                         ; 00420369
    FLD float ptr [EBX + 0xc]           ; 0042036c
    FSTP double ptr [ESP]               ; 0042036f
    PUSH EDI                            ; 00420372
    PUSH 0x5d4b76                       ; 00420373 | = "%s%f,%f,%f\n"
    PUSH ESI                            ; 00420378
    CALL crt_unknown.c_FUN_005c03c0     ; 00420379
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x24                        ; 0042037e
    SUB ESP,0x8                         ; 00420381
    FLD float ptr [EBX + 0xac]          ; 00420384
    FSTP double ptr [ESP]               ; 0042038a
    SUB ESP,0x8                         ; 0042038d
    FLD float ptr [EBX + 0xa8]          ; 00420390
    FSTP double ptr [ESP]               ; 00420396
    SUB ESP,0x8                         ; 00420399
    FLD float ptr [EBX + 0xa4]          ; 0042039c
    FSTP double ptr [ESP]               ; 004203a2
    PUSH EDI                            ; 004203a5
    PUSH 0x5d4b82                       ; 004203a6 | = "%s%f,%f,%f\n"
    PUSH ESI                            ; 004203ab
    CALL crt_unknown.c_FUN_005c03c0     ; 004203ac
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    FLD float ptr [EBX + 0x94]          ; 004203b1
    ADD ESP,0x24                        ; 004203b7
    FMUL double ptr [0x005d4bb8]        ; 004203ba | DAT_005d4bb8
    SUB ESP,0x8                         ; 004203c0
    FSTP double ptr [ESP]               ; 004203c3
    PUSH EDI                            ; 004203c6
    PUSH 0x5d4b8e                       ; 004203c7 | = "%s%f\n"
    PUSH ESI                            ; 004203cc
    CALL crt_unknown.c_FUN_005c03c0     ; 004203cd
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x14                        ; 004203d2
    SUB ESP,0x8                         ; 004203d5
    FLD float ptr [EBX + 0x54]          ; 004203d8
    FSTP double ptr [ESP]               ; 004203db
    SUB ESP,0x8                         ; 004203de
    FLD float ptr [EBX + 0x50]          ; 004203e1
    FSTP double ptr [ESP]               ; 004203e4
    SUB ESP,0x8                         ; 004203e7
    FLD float ptr [EBX + 0x4c]          ; 004203ea
    FSTP double ptr [ESP]               ; 004203ed
    PUSH EDI                            ; 004203f0
    PUSH 0x5d4b94                       ; 004203f1 | = "%s%f,%f,%f\n"
    PUSH ESI                            ; 004203f6
    CALL crt_unknown.c_FUN_005c03c0     ; 004203f7
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x24                        ; 004203fc
    SUB ESP,0x8                         ; 004203ff
    FLD float ptr [EBX + 0x78]          ; 00420402
    FSTP double ptr [ESP]               ; 00420405
    SUB ESP,0x8                         ; 00420408
    FLD float ptr [EBX + 0x74]          ; 0042040b
    FSTP double ptr [ESP]               ; 0042040e
    SUB ESP,0x8                         ; 00420411
    FLD float ptr [EBX + 0x70]          ; 00420414
    FSTP double ptr [ESP]               ; 00420417
    PUSH EDI                            ; 0042041a
    PUSH 0x5d4ba0                       ; 0042041b | = "%s%f,%f,%f\n"
    PUSH ESI                            ; 00420420
    CALL crt_unknown.c_FUN_005c03c0     ; 00420421
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x24                        ; 00420426
    MOV EDX,dword ptr [EBX + 0x254]     ; 00420429
    PUSH EDX                            ; 0042042f
    PUSH EDI                            ; 00420430
    PUSH 0x5d4bac                       ; 00420431 | = "%s%d\n"
    PUSH ESI                            ; 00420436
    CALL crt_unknown.c_FUN_005c03c0     ; 00420437
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x10                        ; 0042043c
    POP EDI                             ; 0042043f
    POP ESI                             ; 00420440
    POP EBX                             ; 00420441
    RET                                 ; 00420442

