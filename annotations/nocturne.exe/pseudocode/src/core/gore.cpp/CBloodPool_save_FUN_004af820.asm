; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gore_cpp_CBloodPool_save_FUN_004af820(undefined4 *param_1,undefined4 param_2)
;
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[1]:
;   core_gore.cpp_CGore_save_FUN_004b08d0 at 004b090f
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_0058515d
;   TerminatedCString s_d_d_00585167
;   TerminatedCString s_d_f_d_d_d_0058516e
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_005644f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004af820
        ;   Label: core_gore.cpp_CBloodPool_save_FUN_004af820
    PUSH ESI                            ; 004af821
    PUSH EDI                            ; 004af822
    PUSH EBP                            ; 004af823
    MOV EBX,dword ptr [ESP + 0x14]      ; 004af824
    MOV ESI,dword ptr [ESP + 0x18]      ; 004af828
    SUB ESP,0x8                         ; 004af82c
    FLD float ptr [EBX + 0xc]           ; 004af82f
    FSTP double ptr [ESP]               ; 004af832
    SUB ESP,0x8                         ; 004af835
    FLD float ptr [EBX + 0x8]           ; 004af838
    FSTP double ptr [ESP]               ; 004af83b
    SUB ESP,0x8                         ; 004af83e
    FLD float ptr [EBX + 0x4]           ; 004af841
    FSTP double ptr [ESP]               ; 004af844
    PUSH 0x58515d                       ; 004af847 | = "%f,%f,%f\n"
    PUSH ESI                            ; 004af84c
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004af84d
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x20                        ; 004af852
    MOV EDX,dword ptr [EBX + 0x10]      ; 004af855
    PUSH EDX                            ; 004af858
    MOV ECX,dword ptr [EBX]             ; 004af859
    PUSH ECX                            ; 004af85b
    PUSH 0x585167                       ; 004af85c | = "%d,%d\n"
    PUSH ESI                            ; 004af861
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004af862
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x10                        ; 004af867
    MOV EDI,dword ptr [EBX + 0x24]      ; 004af86a
    PUSH EDI                            ; 004af86d
    MOV EBP,dword ptr [EBX + 0x20]      ; 004af86e
    PUSH EBP                            ; 004af871
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004af872
    PUSH EAX                            ; 004af875
    SUB ESP,0x8                         ; 004af876
    FLD float ptr [EBX + 0x18]          ; 004af879
    FSTP double ptr [ESP]               ; 004af87c
    MOV EDX,dword ptr [EBX + 0x14]      ; 004af87f
    PUSH EDX                            ; 004af882
    PUSH 0x58516e                       ; 004af883 | = "%d,%f,%d,%d,%d\n"
    PUSH ESI                            ; 004af888
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004af889
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x20                        ; 004af88e
    POP EBP                             ; 004af891
    POP EDI                             ; 004af892
    POP ESI                             ; 004af893
    POP EBX                             ; 004af894
    RET                                 ; 004af895

