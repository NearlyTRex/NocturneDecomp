; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_lever_cpp_CLever_activate_FUN_004c6500(CLever *this_ptr)
;
; Parameters:
; CLever *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[1]:
;   core_hero.cpp_CHero_executeLeverPull_FUN_004b5490 at 004b54a4
;
; Referenced Globals:
;   double DOUBLE_0058793d = 0.5
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004c6500
        ;   Label: core_lever.cpp_CLever_activate_FUN_004c6500
    PUSH EDI                            ; 004c6501
    PUSH EBP                            ; 004c6502
    MOV EBP,ESP                         ; 004c6503
    SUB ESP,0x8                         ; 004c6505
    AND ESP,0xfffffff8                  ; 004c6508
    MOV EDX,dword ptr [EBP + 0x10]      ; 004c650b
    FLD float ptr [EDX + 0x2d4]         ; 004c650e
    MOV dword ptr [EDX + 0x410],0x1     ; 004c6514
    FCOMP double ptr [0x0058793d]       ; 004c651e | DOUBLE_0058793d
    FNSTSW AX                           ; 004c6524
    SAHF                                ; 004c6526
    JNC 0x004c6546                      ; 004c6527
        ;   XREF to: 004c6546 (CONDITIONAL_JUMP)  ; LAB_004c6546
    XOR ESI,ESI                         ; 004c6529
    MOV EDI,0x3ff00000                  ; 004c652b
    MOV dword ptr [ESP],ESI             ; 004c6530
    MOV dword ptr [ESP + 0x4],EDI       ; 004c6533
    FLD double ptr [ESP]                ; 004c6537
    FSTP float ptr [EDX + 0x414]        ; 004c653a
    MOV ESP,EBP                         ; 004c6540
    POP EBP                             ; 004c6542
    POP EDI                             ; 004c6543
    POP ESI                             ; 004c6544
    RET                                 ; 004c6545
    XOR ECX,ECX                         ; 004c6546
        ;   Label: LAB_004c6546
    MOV dword ptr [ESP],ECX             ; 004c6548
    MOV dword ptr [ESP + 0x4],ECX       ; 004c654b
    FLD double ptr [ESP]                ; 004c654f
    FSTP float ptr [EDX + 0x414]        ; 004c6552
    MOV ESP,EBP                         ; 004c6558
    POP EBP                             ; 004c655a
    POP EDI                             ; 004c655b
    POP ESI                             ; 004c655c
    RET                                 ; 004c655d

