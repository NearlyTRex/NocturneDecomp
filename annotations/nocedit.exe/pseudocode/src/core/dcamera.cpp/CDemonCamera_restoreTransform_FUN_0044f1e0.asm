; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_restoreTransform_FUN_0044f1e0(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0044f1e0
        ;   Label: core_dcamera.cpp_CDemonCamera_restoreTransform_FUN_0044f1e0
    PUSH EDI                            ; 0044f1e1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0044f1e2
    LEA ECX,[EAX + 0x4]                 ; 0044f1e6
    LEA EDI,[EAX + 0x16c]               ; 0044f1e9
    LEA ESI,[EAX + 0x148c]              ; 0044f1ef
    LEA EDX,[EAX + 0x1498]              ; 0044f1f5
    MOVSD ES:EDI,ESI                    ; 0044f1fb
    MOVSD ES:EDI,ESI                    ; 0044f1fc
    MOVSD ES:EDI,ESI                    ; 0044f1fd
    CMP ECX,EDX                         ; 0044f1fe
    JNZ 0x0044f271                      ; 0044f200
        ;   XREF to: 0044f271 (CONDITIONAL_JUMP)  ; LAB_0044f271
    MOV EDX,dword ptr [EAX + 0x14a4]    ; 0044f202
        ;   Label: LAB_0044f202
    MOV dword ptr [EAX + 0x178],EDX     ; 0044f208
    MOV EDX,dword ptr [EAX + 0x14a8]    ; 0044f20e
    MOV dword ptr [EAX + 0x17c],EDX     ; 0044f214
    MOV EDX,dword ptr [EAX + 0x14ac]    ; 0044f21a
    MOV dword ptr [EAX + 0x180],EDX     ; 0044f220
    MOV EDX,dword ptr [EAX + 0x14b0]    ; 0044f226
    MOV dword ptr [EAX + 0x184],EDX     ; 0044f22c
    MOV EDX,dword ptr [EAX + 0x14b4]    ; 0044f232
    MOV dword ptr [EAX + 0x188],EDX     ; 0044f238
    MOV EDX,dword ptr [EAX + 0x14b8]    ; 0044f23e
    MOV dword ptr [EAX + 0x18c],EDX     ; 0044f244
    MOV EDX,dword ptr [EAX + 0x14bc]    ; 0044f24a
    MOV dword ptr [EAX + 0x190],EDX     ; 0044f250
    MOV EDX,dword ptr [EAX + 0x14c0]    ; 0044f256
    MOV dword ptr [EAX + 0x194],EDX     ; 0044f25c
    MOV EDX,dword ptr [EAX + 0x14c4]    ; 0044f262
    MOV dword ptr [EAX + 0x198],EDX     ; 0044f268
    POP EDI                             ; 0044f26e
    POP ESI                             ; 0044f26f
    RET                                 ; 0044f270
    PUSH EBX                            ; 0044f271
        ;   Label: LAB_0044f271
    MOV EBX,dword ptr [EDX]             ; 0044f272
    MOV dword ptr [ECX],EBX             ; 0044f274
    MOV EBX,dword ptr [EDX + 0x4]       ; 0044f276
    MOV dword ptr [ECX + 0x4],EBX       ; 0044f279
    MOV EBX,dword ptr [EDX + 0x8]       ; 0044f27c
    MOV dword ptr [ECX + 0x8],EBX       ; 0044f27f
    POP EBX                             ; 0044f282
    JMP 0x0044f202                      ; 0044f283
        ;   XREF to: 0044f202 (UNCONDITIONAL_JUMP)  ; LAB_0044f202

