; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gore_cpp_CBloodSplat_save_FUN_004af1f0(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[1]:
;   core_gore.cpp_CGore_save_FUN_004b08d0 at 004b0958
;
; Referenced Globals:
;   string s_%f,%f,%f_005850f4
;   string s_%d,%d,%d_005850fe
;   string s_%f,%f,%f_00585108
;   string s_%d,%d,%d,%d,%d,%d,%d_00585112
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_005644f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004af1f0
        ;   Label: core_gore.cpp_CBloodSplat_save_FUN_004af1f0
    PUSH ESI                            ; 004af1f1
    PUSH EDI                            ; 004af1f2
    PUSH EBP                            ; 004af1f3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004af1f4
    MOV ESI,dword ptr [ESP + 0x18]      ; 004af1f8
    SUB ESP,0x8                         ; 004af1fc
    FLD float ptr [EBX + 0xc]           ; 004af1ff
    FSTP double ptr [ESP]               ; 004af202
    SUB ESP,0x8                         ; 004af205
    FLD float ptr [EBX + 0x8]           ; 004af208
    FSTP double ptr [ESP]               ; 004af20b
    SUB ESP,0x8                         ; 004af20e
    FLD float ptr [EBX + 0x4]           ; 004af211
    FSTP double ptr [ESP]               ; 004af214
    PUSH 0x5850f4                       ; 004af217 | = "%f,%f,%f\n"
    PUSH ESI                            ; 004af21c
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004af21d
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x20                        ; 004af222
    MOV EDX,dword ptr [EBX]             ; 004af225
    PUSH EDX                            ; 004af227
    MOV ECX,dword ptr [EBX + 0x14]      ; 004af228
    PUSH ECX                            ; 004af22b
    MOV EDI,dword ptr [EBX + 0x10]      ; 004af22c
    PUSH EDI                            ; 004af22f
    PUSH 0x5850fe                       ; 004af230 | = "%d,%d,%d\n"
    PUSH ESI                            ; 004af235
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004af236
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x14                        ; 004af23b
    SUB ESP,0x8                         ; 004af23e
    FLD float ptr [EBX + 0x1c]          ; 004af241
    FSTP double ptr [ESP]               ; 004af244
    SUB ESP,0x8                         ; 004af247
    FLD float ptr [EBX + 0x20]          ; 004af24a
    FSTP double ptr [ESP]               ; 004af24d
    SUB ESP,0x8                         ; 004af250
    FLD float ptr [EBX + 0x18]          ; 004af253
    FSTP double ptr [ESP]               ; 004af256
    PUSH 0x585108                       ; 004af259 | = "%f,%f,%f\n"
    PUSH ESI                            ; 004af25e
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004af25f
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x20                        ; 004af264
    MOV EBP,dword ptr [EBX + 0x40]      ; 004af267
    PUSH EBP                            ; 004af26a
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004af26b
    PUSH EAX                            ; 004af26e
    MOV EDX,dword ptr [EBX + 0x38]      ; 004af26f
    PUSH EDX                            ; 004af272
    MOV ECX,dword ptr [EBX + 0x34]      ; 004af273
    PUSH ECX                            ; 004af276
    MOV EDI,dword ptr [EBX + 0x30]      ; 004af277
    PUSH EDI                            ; 004af27a
    MOV EBP,dword ptr [EBX + 0x2c]      ; 004af27b
    PUSH EBP                            ; 004af27e
    MOV EAX,dword ptr [EBX + 0x28]      ; 004af27f
    PUSH EAX                            ; 004af282
    PUSH 0x585112                       ; 004af283 | = "%d,%d,%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 004af288
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004af289
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x24                        ; 004af28e
    POP EBP                             ; 004af291
    POP EDI                             ; 004af292
    POP ESI                             ; 004af293
    POP EBX                             ; 004af294
    RET                                 ; 004af295

