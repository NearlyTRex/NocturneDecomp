; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_superopt_cpp_CPoly_setVertexAttribFlags_FUN_005cd120 (CPoly *this_ptr,uint set_mask,uint clear_mask)
;
; Parameters:
; CPoly *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   set_mask
; uint             Stack[0xc]:4   clear_mask
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cd120
        ;   Label: shape_superopt.cpp_CPoly_setVertexAttribFlags_FUN_005cd120
    PUSH ESI                            ; 005cd121
    PUSH EDI                            ; 005cd122
    MOV ECX,dword ptr [ESP + 0x10]      ; 005cd123
    MOV EDI,dword ptr [ESP + 0x14]      ; 005cd127
    MOV ESI,dword ptr [ESP + 0x18]      ; 005cd12b
    MOV EAX,dword ptr [ECX + 0x4]       ; 005cd12f
    SHL EAX,0x3                         ; 005cd132
    MOV EDX,dword ptr [ECX]             ; 005cd135
    MOV EBX,EAX                         ; 005cd137
    SHL EAX,0x3                         ; 005cd139
    MOV EDX,dword ptr [EDX + 0x4]       ; 005cd13c
    SUB EAX,EBX                         ; 005cd13f
    AND dword ptr [EDX + EAX*0x1 + 0x30],ESI ; 005cd141
    MOV EAX,dword ptr [ECX + 0x4]       ; 005cd145
    SHL EAX,0x3                         ; 005cd148
    MOV EBX,EAX                         ; 005cd14b
    SHL EAX,0x3                         ; 005cd14d
    SUB EAX,EBX                         ; 005cd150
    OR dword ptr [EDX + EAX*0x1 + 0x30],EDI ; 005cd152
    MOV EAX,dword ptr [ECX + 0x8]       ; 005cd156
    SHL EAX,0x3                         ; 005cd159
    MOV EBX,EAX                         ; 005cd15c
    SHL EAX,0x3                         ; 005cd15e
    SUB EAX,EBX                         ; 005cd161
    AND dword ptr [EDX + EAX*0x1 + 0x30],ESI ; 005cd163
    MOV EAX,dword ptr [ECX + 0x8]       ; 005cd167
    SHL EAX,0x3                         ; 005cd16a
    MOV EBX,EAX                         ; 005cd16d
    SHL EAX,0x3                         ; 005cd16f
    SUB EAX,EBX                         ; 005cd172
    OR dword ptr [EDX + EAX*0x1 + 0x30],EDI ; 005cd174
    MOV EAX,dword ptr [ECX + 0xc]       ; 005cd178
    SHL EAX,0x3                         ; 005cd17b
    MOV EBX,EAX                         ; 005cd17e
    SHL EAX,0x3                         ; 005cd180
    SUB EAX,EBX                         ; 005cd183
    AND dword ptr [EDX + EAX*0x1 + 0x30],ESI ; 005cd185
    MOV EAX,dword ptr [ECX + 0xc]       ; 005cd189
    SHL EAX,0x3                         ; 005cd18c
    MOV ECX,EAX                         ; 005cd18f
    SHL EAX,0x3                         ; 005cd191
    SUB EAX,ECX                         ; 005cd194
    OR dword ptr [EDX + EAX*0x1 + 0x30],EDI ; 005cd196
    POP EDI                             ; 005cd19a
    POP ESI                             ; 005cd19b
    POP EBX                             ; 005cd19c
    RET                                 ; 005cd19d

