; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void shape_superopt_cpp_FUN_005d8350(void)
;
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005d8350
        ;   Label: shape_superopt.cpp_FUN_005d8350
    PUSH EBP                            ; 005d8351
    MOV EBP,ESP                         ; 005d8352
    SUB ESP,0x10                        ; 005d8354
    AND ESP,0xfffffff8                  ; 005d8357
    MOV EDX,dword ptr [EBP + 0xc]       ; 005d835a
    MOV ECX,dword ptr [EBP + 0x10]      ; 005d835d
    MOV EAX,ESI                         ; 005d8360
    FLD double ptr [EDX]                ; 005d8362
    FLD double ptr [EDX + 0x8]          ; 005d8364
    MOV EDI,ESI                         ; 005d8367
    MOV ESI,ESP                         ; 005d8369
    FSUB double ptr [ECX + 0x8]         ; 005d836b
    FXCH                                ; 005d836e
    FSUB double ptr [ECX]               ; 005d8370
    FXCH                                ; 005d8372
    FSTP double ptr [ESP + 0x8]         ; 005d8374
    FSTP double ptr [ESP]               ; 005d8378
    MOVSD ES:EDI,ESI                    ; 005d837b
    MOVSD ES:EDI,ESI                    ; 005d837c
    MOVSD ES:EDI,ESI                    ; 005d837d
    MOVSD ES:EDI,ESI                    ; 005d837e
    MOV ESP,EBP                         ; 005d837f
    POP EBP                             ; 005d8381
    POP EDI                             ; 005d8382
    RET                                 ; 005d8383

