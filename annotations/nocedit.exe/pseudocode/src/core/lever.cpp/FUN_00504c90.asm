; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_lever.cpp_FUN_00504c90()
;
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[2]:
;   core_hero.cpp_FUN_004f30f0 at 004f3104
;   core_lever.cpp_FUN_00505210 at 00505225
;
; Referenced Globals:
;   double DOUBLE_006310b8 = 0.5
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00504c90
        ;   Label: core_lever.cpp_FUN_00504c90
    PUSH EDI                            ; 00504c91
    PUSH EBP                            ; 00504c92
    MOV EBP,ESP                         ; 00504c93
    SUB ESP,0x8                         ; 00504c95
    AND ESP,0xfffffff8                  ; 00504c98
    MOV EDX,dword ptr [EBP + 0x10]      ; 00504c9b
    FLD float ptr [EDX + 0x2dc]         ; 00504c9e
    MOV dword ptr [EDX + 0x418],0x1     ; 00504ca4
    FCOMP double ptr [0x006310b8]       ; 00504cae | double DOUBLE_006310b8
    FNSTSW AX                           ; 00504cb4
    SAHF                                ; 00504cb6
    JNC 0x00504cd6                      ; 00504cb7 | LAB_00504cd6
        ;   XREF to: 00504cd6 (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 00504cb9
    MOV EDI,0x3ff00000                  ; 00504cbb
    MOV dword ptr [ESP],ESI             ; 00504cc0
    MOV dword ptr [ESP + 0x4],EDI       ; 00504cc3
    FLD double ptr [ESP]                ; 00504cc7
    FSTP float ptr [EDX + 0x41c]        ; 00504cca
    MOV ESP,EBP                         ; 00504cd0
    POP EBP                             ; 00504cd2
    POP EDI                             ; 00504cd3
    POP ESI                             ; 00504cd4
    RET                                 ; 00504cd5
    XOR ECX,ECX                         ; 00504cd6
        ;   Label: LAB_00504cd6
    MOV dword ptr [ESP],ECX             ; 00504cd8
    MOV dword ptr [ESP + 0x4],ECX       ; 00504cdb
    FLD double ptr [ESP]                ; 00504cdf
    FSTP float ptr [EDX + 0x41c]        ; 00504ce2
    MOV ESP,EBP                         ; 00504ce8
    POP EBP                             ; 00504cea
    POP EDI                             ; 00504ceb
    POP ESI                             ; 00504cec
    RET                                 ; 00504ced

