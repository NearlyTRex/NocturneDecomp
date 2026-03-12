; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __stack_esi engine_matrix_c_normalizeVector3DFixed_FUN_0050d970(CVector3i *input_vector,CVector3i *output_vector)
;
; Parameters:
; CVector3i *      Stack[0x4]:4   input_vector
; Local Variables:
; int[1017]        Stack[-0x1000]:4068  aiStackY_1000
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
; int              Stack[-0x10]:4  local_10
;
; XREF[3]:
;   engine_3d.c_renderPolygonPerspectiveNormalized_FUN_004055b0 at 004055da
;   engine_3d.c_renderPolygonUVTextureEnable_FUN_00405350 at 0040537a
;   engine_3d.c_renderPolygonUVTextureNormalized_FUN_00405430 at 0040545a
;
; Called Functions:
;   engine_matrix.c_integerSquareRoot_FUN_0050d890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050d970
        ;   Label: engine_matrix.c_normalizeVector3DFixed_FUN_0050d970
    PUSH EDI                            ; 0050d971
    PUSH EBP                            ; 0050d972
    SUB ESP,0xc                         ; 0050d973
    MOV EBP,ESI                         ; 0050d976
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0050d978
    MOV EAX,dword ptr [ESI + 0x4]       ; 0050d97c
    IMUL EAX,EAX                        ; 0050d97f
    MOV ECX,dword ptr [ESI]             ; 0050d982
    IMUL ECX,ECX                        ; 0050d984
    ADD EAX,ECX                         ; 0050d987
    MOV ECX,dword ptr [ESI + 0x8]       ; 0050d989
    IMUL ECX,ECX                        ; 0050d98c
    ADD EAX,ECX                         ; 0050d98f
    PUSH EAX                            ; 0050d991
    CALL engine_matrix.c_integerSquareRoot_FUN_0050d890 ; 0050d992
        ;   XREF to: 0050d890 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_integerSquareRoot_FUN_0050d890(int value)
    MOV EDX,0x7fff                      ; 0050d997
    MOV ECX,EAX                         ; 0050d99c
    ADD ESP,0x4                         ; 0050d99e
    MOV EBX,ECX                         ; 0050d9a1
    MOV EAX,dword ptr [ESI]             ; 0050d9a3
    IMUL EDX                            ; 0050d9a5
    IDIV EBX                            ; 0050d9a7
    MOV EDX,0x7fff                      ; 0050d9a9
    ADD EAX,EAX                         ; 0050d9ae
    MOV EBX,ECX                         ; 0050d9b0
    MOV dword ptr [ESP],EAX             ; 0050d9b2
    MOV EAX,dword ptr [ESI + 0x4]       ; 0050d9b5
    IMUL EDX                            ; 0050d9b8
    IDIV EBX                            ; 0050d9ba
    MOV EDX,0x7fff                      ; 0050d9bc
    ADD EAX,EAX                         ; 0050d9c1
    MOV EBX,ECX                         ; 0050d9c3
    MOV dword ptr [ESP + 0x4],EAX       ; 0050d9c5
    MOV EAX,dword ptr [ESI + 0x8]       ; 0050d9c9
    MOV EDI,EBP                         ; 0050d9cc
    IMUL EDX                            ; 0050d9ce
    IDIV EBX                            ; 0050d9d0
    ADD EAX,EAX                         ; 0050d9d2
    MOV ESI,ESP                         ; 0050d9d4
    MOV dword ptr [ESP + 0x8],EAX       ; 0050d9d6
    MOVSD ES:EDI,ESI                    ; 0050d9da
    MOVSD ES:EDI,ESI                    ; 0050d9db
    MOVSD ES:EDI,ESI                    ; 0050d9dc
    MOV EAX,EBP                         ; 0050d9dd
    ADD ESP,0xc                         ; 0050d9df
    POP EBP                             ; 0050d9e2
    POP EDI                             ; 0050d9e3
    POP EBX                             ; 0050d9e4
    RET                                 ; 0050d9e5

