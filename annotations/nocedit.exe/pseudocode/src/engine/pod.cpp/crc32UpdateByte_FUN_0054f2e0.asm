; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl uint __cdecl engine_pod_cpp_crc32UpdateByte_FUN_0054f2e0(uint current_crc,uchar data_byte)
;
; Parameters:
; uint             Stack[0x4]:4   current_crc
; uchar            Stack[0x8]:1   data_byte
;
; XREF[7]:
;   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 at 004b65aa
;   engine_pod.cpp_CPodFile_computeFileCRC_FUN_005507f0 at 005508e4
;   engine_pod.cpp_CPodFile_verifyChecksum_FUN_00550230 at 005503b3
;   engine_pod.cpp_CPod_computeAndStoreCRC_FUN_00551000 at 00551128
;   engine_pod.cpp_crc32ComputeFileRange_FUN_0054f490 at 0054f512
;   engine_pod.cpp_crc32ComputeFromFile_FUN_0054f3e0 at 0054f422
;   engine_pod.cpp_crc32UpdateBuffer_FUN_0054f3a0 at 0054f3bd
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0054f2e0
        ;   Label: engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0
    XOR EAX,EAX                         ; 0054f2e4
    MOV AL,byte ptr [ESP + 0x8]         ; 0054f2e6
    SHL EAX,0x18                        ; 0054f2ea
    XOR EDX,EAX                         ; 0054f2ed
    LEA EAX,[EDX + EDX*0x1]             ; 0054f2ef
    TEST EDX,0x80000000                 ; 0054f2f2
    JZ 0x0054f2ff                       ; 0054f2f8
        ;   XREF to: 0054f2ff (CONDITIONAL_JUMP)  ; LAB_0054f2ff
    XOR EAX,0x4c11db7                   ; 0054f2fa
    LEA EDX,[EAX + EAX*0x1]             ; 0054f2ff
        ;   Label: LAB_0054f2ff
    TEST EAX,0x80000000                 ; 0054f302
    JZ 0x0054f37b                       ; 0054f307
        ;   XREF to: 0054f37b (CONDITIONAL_JUMP)  ; LAB_0054f37b
    MOV EAX,EDX                         ; 0054f30d
    XOR EAX,0x4c11db7                   ; 0054f30f
    LEA EDX,[EAX + EAX*0x1]             ; 0054f314
        ;   Label: LAB_0054f314
    TEST EAX,0x80000000                 ; 0054f317
    JZ 0x0054f37f                       ; 0054f31c
        ;   XREF to: 0054f37f (CONDITIONAL_JUMP)  ; LAB_0054f37f
    MOV EAX,EDX                         ; 0054f31e
    XOR EAX,0x4c11db7                   ; 0054f320
    LEA EDX,[EAX + EAX*0x1]             ; 0054f325
        ;   Label: LAB_0054f325
    TEST EAX,0x80000000                 ; 0054f328
    JZ 0x0054f383                       ; 0054f32d
        ;   XREF to: 0054f383 (CONDITIONAL_JUMP)  ; LAB_0054f383
    MOV EAX,EDX                         ; 0054f32f
    XOR EAX,0x4c11db7                   ; 0054f331
    LEA EDX,[EAX + EAX*0x1]             ; 0054f336
        ;   Label: LAB_0054f336
    TEST EAX,0x80000000                 ; 0054f339
    JZ 0x0054f387                       ; 0054f33e
        ;   XREF to: 0054f387 (CONDITIONAL_JUMP)  ; LAB_0054f387
    MOV EAX,EDX                         ; 0054f340
    XOR EAX,0x4c11db7                   ; 0054f342
    LEA EDX,[EAX + EAX*0x1]             ; 0054f347
        ;   Label: LAB_0054f347
    TEST EAX,0x80000000                 ; 0054f34a
    JZ 0x0054f38b                       ; 0054f34f
        ;   XREF to: 0054f38b (CONDITIONAL_JUMP)  ; LAB_0054f38b
    MOV EAX,EDX                         ; 0054f351
    XOR EAX,0x4c11db7                   ; 0054f353
    LEA EDX,[EAX + EAX*0x1]             ; 0054f358
        ;   Label: LAB_0054f358
    TEST EAX,0x80000000                 ; 0054f35b
    JZ 0x0054f38f                       ; 0054f360
        ;   XREF to: 0054f38f (CONDITIONAL_JUMP)  ; LAB_0054f38f
    MOV EAX,EDX                         ; 0054f362
    XOR EAX,0x4c11db7                   ; 0054f364
    LEA EDX,[EAX + EAX*0x1]             ; 0054f369
        ;   Label: LAB_0054f369
    TEST EAX,0x80000000                 ; 0054f36c
    JZ 0x0054f393                       ; 0054f371
        ;   XREF to: 0054f393 (CONDITIONAL_JUMP)  ; LAB_0054f393
    MOV EAX,EDX                         ; 0054f373
    XOR EAX,0x4c11db7                   ; 0054f375
    RET                                 ; 0054f37a
    MOV EAX,EDX                         ; 0054f37b
        ;   Label: LAB_0054f37b
    JMP 0x0054f314                      ; 0054f37d
        ;   XREF to: 0054f314 (UNCONDITIONAL_JUMP)  ; LAB_0054f314
    MOV EAX,EDX                         ; 0054f37f
        ;   Label: LAB_0054f37f
    JMP 0x0054f325                      ; 0054f381
        ;   XREF to: 0054f325 (UNCONDITIONAL_JUMP)  ; LAB_0054f325
    MOV EAX,EDX                         ; 0054f383
        ;   Label: LAB_0054f383
    JMP 0x0054f336                      ; 0054f385
        ;   XREF to: 0054f336 (UNCONDITIONAL_JUMP)  ; LAB_0054f336
    MOV EAX,EDX                         ; 0054f387
        ;   Label: LAB_0054f387
    JMP 0x0054f347                      ; 0054f389
        ;   XREF to: 0054f347 (UNCONDITIONAL_JUMP)  ; LAB_0054f347
    MOV EAX,EDX                         ; 0054f38b
        ;   Label: LAB_0054f38b
    JMP 0x0054f358                      ; 0054f38d
        ;   XREF to: 0054f358 (UNCONDITIONAL_JUMP)  ; LAB_0054f358
    MOV EAX,EDX                         ; 0054f38f
        ;   Label: LAB_0054f38f
    JMP 0x0054f369                      ; 0054f391
        ;   XREF to: 0054f369 (UNCONDITIONAL_JUMP)  ; LAB_0054f369
    MOV EAX,EDX                         ; 0054f393
        ;   Label: LAB_0054f393
    RET                                 ; 0054f395

