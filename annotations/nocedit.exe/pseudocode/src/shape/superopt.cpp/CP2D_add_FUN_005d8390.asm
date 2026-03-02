; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CP2D * __stack2_esi shape_superopt_cpp_CP2D_add_FUN_005d8390(CP2D *this_ptr,CP2D *a,CP2D *b)
;
; Parameters:
; CP2D *           Stack[0x4]:4   this_ptr
; CP2D *           Stack[0x8]:4   a
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005d8390
        ;   Label: shape_superopt.cpp_CP2D_add_FUN_005d8390
    PUSH EBP                            ; 005d8391
    MOV EBP,ESP                         ; 005d8392
    SUB ESP,0x10                        ; 005d8394
    AND ESP,0xfffffff8                  ; 005d8397
    MOV EDX,dword ptr [EBP + 0xc]       ; 005d839a
    MOV ECX,dword ptr [EBP + 0x10]      ; 005d839d
    MOV EAX,ESI                         ; 005d83a0
    FLD double ptr [EDX]                ; 005d83a2
    FLD double ptr [EDX + 0x8]          ; 005d83a4
    MOV EDI,ESI                         ; 005d83a7
    MOV ESI,ESP                         ; 005d83a9
    FADD double ptr [ECX + 0x8]         ; 005d83ab
    FXCH                                ; 005d83ae
    FADD double ptr [ECX]               ; 005d83b0
    FXCH                                ; 005d83b2
    FSTP double ptr [ESP + 0x8]         ; 005d83b4
    FSTP double ptr [ESP]               ; 005d83b8
    MOVSD ES:EDI,ESI                    ; 005d83bb
    MOVSD ES:EDI,ESI                    ; 005d83bc
    MOVSD ES:EDI,ESI                    ; 005d83bd
    MOVSD ES:EDI,ESI                    ; 005d83be
    MOV ESP,EBP                         ; 005d83bf
    POP EBP                             ; 005d83c1
    POP EDI                             ; 005d83c2
    RET                                 ; 005d83c3

