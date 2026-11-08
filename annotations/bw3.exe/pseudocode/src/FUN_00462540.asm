; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00462540(undefined4 param_1,float param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[43]:
;   FUN_0040df20 at 0040dfa4
;   FUN_0040e810 at 0040e893
;   FUN_0040f200 at 0040f269
;   FUN_0040f590 at 0040f61a
;   FUN_00412c50 at 00412e7e
;   FUN_00414bd0 at 00414cb7
;   FUN_0041f8e0 at 0041f9a1
;   FUN_0041f9f0 at 0041fae0
;   FUN_004215f0 at 0042175d
;   FUN_0042e3a0 at 0042e48e
;   ... and 33 more
;
; Called Functions:
;   FUN_00460f20
;   FUN_004625a0
;   FUN_005a3120
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00462540
        ;   Label: FUN_00462540
    MOV EAX,dword ptr [ESP + 0x8]       ; 00462543
    MOV EDX,dword ptr [ESP + 0x10]      ; 00462547
    FLD float ptr [ESP + 0xc]           ; 0046254b
    PUSH EDX                            ; 0046254f
    CALL FUN_005a3120                   ; 00462550
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    PUSH EAX                            ; 00462555
    FISTP dword ptr [ESP + 0x8]         ; 00462556
    MOV ECX,dword ptr [ESP + 0x8]       ; 0046255a
    PUSH ECX                            ; 0046255e
    PUSH EAX                            ; 0046255f
    CALL FUN_004625a0                   ; 00462560
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625a0()
    ADD ESP,0x4                         ; 00462565
    PUSH EAX                            ; 00462568
    CALL FUN_00460f20                   ; 00462569
        ;   XREF to: 00460f20 (UNCONDITIONAL_CALL)  ; undefined FUN_00460f20()
    ADD ESP,0x10                        ; 0046256e
    ADD ESP,0x4                         ; 00462571
    RET                                 ; 00462574

