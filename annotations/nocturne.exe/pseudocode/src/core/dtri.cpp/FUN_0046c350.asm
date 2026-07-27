; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtri_cpp_FUN_0046c350(void)
;
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
;   TerminatedCString s_f_f_f_f_f_f_f_f_f_0057e442
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_005644f0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0046c350
        ;   Label: core_dtri.cpp_FUN_0046c350
    SUB ESP,0x8                         ; 0046c354
    FLD float ptr [EAX + 0x20]          ; 0046c357
    FSTP double ptr [ESP]               ; 0046c35a
    SUB ESP,0x8                         ; 0046c35d
    FLD float ptr [EAX + 0x1c]          ; 0046c360
    FSTP double ptr [ESP]               ; 0046c363
    SUB ESP,0x8                         ; 0046c366
    FLD float ptr [EAX + 0x18]          ; 0046c369
    FSTP double ptr [ESP]               ; 0046c36c
    SUB ESP,0x8                         ; 0046c36f
    FLD float ptr [EAX + 0x14]          ; 0046c372
    FSTP double ptr [ESP]               ; 0046c375
    SUB ESP,0x8                         ; 0046c378
    FLD float ptr [EAX + 0x10]          ; 0046c37b
    FSTP double ptr [ESP]               ; 0046c37e
    SUB ESP,0x8                         ; 0046c381
    FLD float ptr [EAX + 0xc]           ; 0046c384
    FSTP double ptr [ESP]               ; 0046c387
    SUB ESP,0x8                         ; 0046c38a
    FLD float ptr [EAX + 0x8]           ; 0046c38d
    FSTP double ptr [ESP]               ; 0046c390
    SUB ESP,0x8                         ; 0046c393
    FLD float ptr [EAX + 0x4]           ; 0046c396
    FSTP double ptr [ESP]               ; 0046c399
    SUB ESP,0x8                         ; 0046c39c
    FLD float ptr [EAX]                 ; 0046c39f
    FSTP double ptr [ESP]               ; 0046c3a1
    PUSH 0x57e442                       ; 0046c3a4 | = "%f,%f,%f,%f,%f,%f,%f,%f,%f\n"
    MOV EDX,dword ptr [ESP + 0x54]      ; 0046c3a9
    PUSH EDX                            ; 0046c3ad
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 0046c3ae
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fprintf_FUN_005644f0()
    ADD ESP,0x50                        ; 0046c3b3
    RET                                 ; 0046c3b6

