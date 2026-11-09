; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_lever_cpp_FUN_004e20e0(CLever *this_ptr)
;
; Parameters:
; CLever *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[1]:
;   core_hero.cpp_FUN_004cf440 at 004cf4a8
;
; Referenced Globals:
;   undefined4 DAT_005dbf52
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004e20e0
        ;   Label: core_lever.cpp_FUN_004e20e0
    PUSH EDI                            ; 004e20e1
    PUSH EBP                            ; 004e20e2
    MOV EBP,ESP                         ; 004e20e3
    SUB ESP,0x8                         ; 004e20e5
    AND ESP,0xfffffff8                  ; 004e20e8
    MOV EDX,dword ptr [EBP + 0x10]      ; 004e20eb
    FLD float ptr [EDX + 0x438]         ; 004e20ee
    MOV dword ptr [EDX + 0x574],0x1     ; 004e20f4
    FCOMP double ptr [0x005dbf52]       ; 004e20fe | DAT_005dbf52
    FNSTSW AX                           ; 004e2104
    SAHF                                ; 004e2106
    JNC 0x004e2126                      ; 004e2107
        ;   XREF to: 004e2126 (CONDITIONAL_JUMP)  ; LAB_004e2126
    XOR ESI,ESI                         ; 004e2109
    MOV EDI,0x3ff00000                  ; 004e210b
    MOV dword ptr [ESP],ESI             ; 004e2110
    MOV dword ptr [ESP + 0x4],EDI       ; 004e2113
    FLD double ptr [ESP]                ; 004e2117
    FSTP float ptr [EDX + 0x578]        ; 004e211a
    MOV ESP,EBP                         ; 004e2120
    POP EBP                             ; 004e2122
    POP EDI                             ; 004e2123
    POP ESI                             ; 004e2124
    RET                                 ; 004e2125
    XOR ECX,ECX                         ; 004e2126
        ;   Label: LAB_004e2126
    MOV dword ptr [ESP],ECX             ; 004e2128
    MOV dword ptr [ESP + 0x4],ECX       ; 004e212b
    FLD double ptr [ESP]                ; 004e212f
    FSTP float ptr [EDX + 0x578]        ; 004e2132
    MOV ESP,EBP                         ; 004e2138
    POP EBP                             ; 004e213a
    POP EDI                             ; 004e213b
    POP ESI                             ; 004e213c
    RET                                 ; 004e213d

